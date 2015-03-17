/*
 * Copyright (C) 2015 Palmer Dabbelt
 *   <palmer.dabbelt@eecs.berkeley.edu>
 *
 * This file is part of hurricane-benchmarks.
 * 
 * hurricane-benchmarks is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * hurricane-benchmarks is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with hurricane-benchmarks.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <chrono>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <valarray>
#include <memory>
#include <random>
#include "ppp_repeat.h++"

/* These parameters need to be fixed in order to get consistent
 * results between the different platforms. */
#define ITERATIONS 8
#define N 128
#define WARMUP_COUNT 256
#define BENCHMARK_COUNT 512
#define DELTA (1e-15)

/* These parameters are used to tune the fast implementation and
 * therefor should be used by some sort of auto-tuner. */

/* The length (in doubles) of the vector registers to use. */
#ifndef VECTOR_LENGTH
#define VECTOR_LENGTH 4
#endif

/* The alignment (in bytes) of the matrix. */
#ifndef VECTOR_ALIGNMENT
#define VECTOR_ALIGNMENT 256
#endif

/* I have some explicit SIMD code, this makes sure that abides by
 * the VECTOR_LENGTH constant. */
typedef double vector __attribute__(( vector_size(VECTOR_LENGTH * 8) ));

/* The vector initializer in GCC in odd, this allows me to initailize
 * vectors in a sane way. */
#define PSIMD_INIT_ONE(N, P) P,
#define PSIMD_INIT(N, V) { PPPR(N, PSIMD_INIT_ONE, V) }

/* Apparently some GCC versions don't have std::align?  This is from
 * gcc/libstdc++-v3/include/std/memory. */
template<class T>
T* aligned_array(size_t count, size_t byte_alignment)
{
    auto alloc = new T[count + byte_alignment*2];
    auto ialloc = reinterpret_cast<uintptr_t>(alloc);
    ialloc = ialloc - (ialloc % byte_alignment) + byte_alignment;
    return reinterpret_cast<T*>(ialloc);
}

/* The simplest matrix multiplication implementation I can think of
 * that's reasonably performant -- note that GCC appears to vectorize
 * this for me as follows:
 *
 * - A single YMM register is loaded from columns of B
 * - A single YMM register is loaded from a scalar from A (via
 *   vbroadcast)
 * - A single YMM register is accumulated into to make columns of C
 *
 * The inner kernel is as follows:

    k_loop:
       vbroadcastsd (%rcx),%ymm2
       add    $0x400,%rax
       add    $0x8,%rcx
       vmovupd -0x400(%rax),%ymm1
       cmp    %rsi,%rax
       vfmadd231pd %ymm1,%ymm2,%ymm0
       jne    k_loop

 * Which provides 4 FMAs every 5 loads (4x reuse on A, 1x on B).
 *
 * Note that LLVM doesn't appear to be able to vectorize this loop at
 * all -- possibly because it doesn't know to emit unaligned memory
 * instructions here?  The alignment of C isn't known, so GCC emits a
 * maybe-unaligned store of cC in the J loop.
 */
__attribute__((noinline))
void simple_matmul(double * __restrict__ C,
                   const double * __restrict__ A,
                   const double * __restrict__ B)
{
    for (auto i = 0*N; i < N; ++i) {
        for (auto j = 0*N; j < N; ++j) {
            double cC(0);

            for (auto k = 0*N; k < N; ++k) {
                double cA = A[i*N + k];
                double cB = B[k*N + j];
                cC += cA * cB;
            }

            C[i*N + j] = cC;
        }
    }
}

/* This implementation attempts to produce exactly the same result as
 * the original simple_matmul as auto-vectorized by GCC, but by
 * explicitly using vector intrinsics.  This appears to emit good code
 * on both GCC and LLVM, and has the advantage of getting rid of the
 * unaligned store.  LLVM has significantly higher performance here
 * because it unrolls the K loop into two operations as follows:
 *

    k_loop:
      vbroadcastsd -0x8(%rcx),%ymm1
      lea    (%rdx,%rax,1),%r11
      vmulpd -0x400(%r11,%r10,8),%ymm1,%ymm1
      vaddpd %ymm1,%ymm0,%ymm0
      vbroadcastsd (%rcx),%ymm1
      vmulpd (%r11,%r10,8),%ymm1,%ymm1
      vaddpd %ymm1,%ymm0,%ymm0
      add    $0x800,%rax
      add    $0x10,%rcx
      cmp    $0x20000,%rax
      jne    k_loop

 * which provides 8 FMAs for every 10 loads (4x reuse on A, 1x on B)
 * -- the higher throughput comes from doubling the FMAs per branch.
 */
__attribute__((noinline))
void matmul_simd_j(double * __restrict__ C,
                   const double * __restrict__ A,
                   const double * __restrict__ B)
{
    for (auto i = 0*N; i < N; ++i) {
        for (auto j = 0*N; j < N; j += VECTOR_LENGTH) {
            vector cC = PSIMD_INIT(VECTOR_LENGTH, 0);

            for (auto k = 0*N; k < N; ++k) {
                vector cA = PSIMD_INIT(VECTOR_LENGTH, A[i*N + k]);
                vector cB = *((vector*)(B + k*N + j));
                cC += cA * cB;
            }

            *((vector*)(C + i*N + j)) = cC;
        }
    }
}

void benchmark(const double *a, const double *b, double *fast,
               const double *gold,
               void (*func)(double *c, const double *a, const double *b),
               const char *name)
{
    for (auto i = 0*N*N; i < N*N; ++i)
        fast[i] = -1.0/0.0;

    for (auto i = 0*WARMUP_COUNT; i < WARMUP_COUNT; ++i)
        func(fast, a, b);

    {
        std::chrono::high_resolution_clock clock;

        auto start = clock.now();

        for (auto i = 0*BENCHMARK_COUNT; i < BENCHMARK_COUNT; ++i)
            func(fast, a, b);

        auto stop = clock.now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();

        std::cout << name << (2.0*N*N*N*BENCHMARK_COUNT) / (duration / 1000.0 * 1e9) << "\n";
    }

    bool fail = false;
    for (auto i = 0*N*N; i < N*N; ++i) {
        if (std::isnan(fast[i]) || std::isinf(fast[i])) {
            fprintf(stderr, "%d: NAN %f %f\n", i, gold[i], fast[i]);
            fail = true;
        }

        if (fabs(gold[i] - fast[i]) > DELTA) {
            fprintf(stderr, "%d: %f != %f\n", i, gold[i], fast[i]);
            fail = true;
        }
    }

    if (fail)
        abort();
}

int main(int argc __attribute__((unused)),
         char **argv __attribute__((unused)))
{
    auto a = aligned_array<double>(N*N, VECTOR_ALIGNMENT);
    auto b = aligned_array<double>(N*N, VECTOR_ALIGNMENT);
    auto c = aligned_array<double>(N*N, VECTOR_ALIGNMENT);
    auto gold = aligned_array<double>(N*N, VECTOR_ALIGNMENT);

    std::uniform_real_distribution<double> unif(-1.0, 1.0);
    std::default_random_engine re;

    for (auto iter = 0*ITERATIONS; iter < ITERATIONS; ++iter) {
        for (auto i = 0*N*N; i < N*N; ++i) {
            a[i] = unif(re);
            b[i] = unif(re);
        }

        simple_matmul(gold, a, b);

        benchmark(a, b, c, gold, &simple_matmul, "simple: ");
        benchmark(a, b, c, gold, &matmul_simd_j, "SIMD J: ");
    }

    return 0;
}
