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
#include "ppp_repeat.h++"

/* These parameters need to be fixed in order to get consistent
 * results between the different platforms. */
#define ITERATIONS 8
#define N 128
#define WARMUP_COUNT 256
#define BENCHMARK_COUNT 256
#define DELTA (0.00001)

/* These parameters are used to tune the fast implementation and
 * therefor should be used by some sort of auto-tuner. */
#define K_LOOP_UNROLL 4
#define BLOCK_HORIZ 4

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

 * Which provides 4 FMAs every 5 loads (4x reuse on A, 1x on B)
 */
void simple_matmul(double * __restrict__ C,
                   const double * __restrict__ A,
                   const double * __restrict__ B)
{
    for (auto i = 0*N; i < N; ++i) {
        for (auto j = 0*N; j < N; ++j) {
            double c = 0;

            for (auto k = 0*N; k < N; ++k) {
                double a = A[i*N + k];
                double b = B[k*N + j];
                c += a * b;
            }

            C[i*N + j] = c;
        }
    }
}

void fast_matmul(double * __restrict__ C,
                 const double * __restrict__ A,
                 const double * __restrict__ B)
{
    for (auto i = 0*N; i < N; ++i) {
        for (auto j = 0*N; j < N; ++j) {
            double c = 0;

            for (auto k = 0*N; k < N; ++k) {
                double a = A[i*N + k];
                double b = B[k*N + j];
                c += a * b;
            }

            C[i*N + j] = c;
        }
    }
}

void benchmark(double *a, double *b,
               double *fast, double *gold,
               void (*func)(double *c, const double *a, const double *b))
{

    for (auto i = 0*WARMUP_COUNT; i < WARMUP_COUNT; ++i)
        func(fast, a, b);

    {
        std::chrono::high_resolution_clock clock;

        auto start = clock.now();

        for (auto i = 0*BENCHMARK_COUNT; i < BENCHMARK_COUNT; ++i)
            func(fast, a, b);

        auto stop = clock.now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();

        std::cout << "Fast:   " << (2.0*N*N*N*BENCHMARK_COUNT) / (duration / 1000.0) << "\n";
    }

    for (size_t i = 0; i < N*N; ++i)
        if (fabs(gold[i] - fast[i]) > DELTA)
            abort();
}

int main(int argc __attribute__((unused)),
         char **argv __attribute__((unused)))
{
    double *a = new double[N*N];
    double *b = new double[N*N];
    double *c = new double[N*N];

    double *gold = new double[N*N];

    srand(0);

    for (size_t iter = 0; iter < ITERATIONS; ++iter) {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                a[i*N + j] = rand() + rand() / 1000.0;
                b[i*N + j] = rand() + rand() / 1000.0;
            }
        }

        simple_matmul(gold, a, b);

        benchmark(a, b, c, gold, &simple_matmul);
        benchmark(a, b, c, gold, &fast_matmul);
    }

    return 0;
}
