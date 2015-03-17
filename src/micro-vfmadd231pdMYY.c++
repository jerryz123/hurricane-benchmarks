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
#include <iostream>
#include "ppp_repeat.h++"

#define LOOP_ITERATIONS (2ULL << 30)
#define LOOP_UNROLLING  8
#define VECTOR_SIZE     4

__attribute__((noinline))
void benchmark(void)
{
    double vector[LOOP_UNROLLING] __attribute__(( vector_size(4 * sizeof(double)) ));

    for (auto i = 0*LOOP_ITERATIONS; i < LOOP_ITERATIONS; ++i) {
#define UNROLL(N, P)                                    \
        __asm__ volatile(                               \
            "vfmadd231pd %0,%%ymm15,%%ymm" #N "\n\t"    \
            :                                           \
            : "m"(vector[N])                            \
            );                                          \

    PPPR(LOOP_UNROLLING, UNROLL, 0)

#undef UNROLL
    }
}

int main(int argc __attribute__((unused)),
         char **argv __attribute__((unused)))
{
    std::chrono::high_resolution_clock clock;

    benchmark();

    auto start = clock.now();

    benchmark();

    auto stop = clock.now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
    std::cout << (LOOP_ITERATIONS * LOOP_UNROLLING) / (duration / 1000.0 * 1e9) << "\n";
    
    return 0;
}
