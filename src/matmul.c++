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

#define N 128
#define WARMUP_COUNT 256
#define BENCHMARK_COUNT 256

//static void simple_matmul(double *C, const double *A, const double *B);

void simple_matmul(double * __restrict__ C,
                   const double * __restrict__ A,
                   const double * __restrict__ B)
{
    for (auto i = 0*N; i < N; ++i)
        for (auto j = 0*N; j < N; ++j)
            C[i*N + j] = 0;

    for (auto i = 0*N; i < N; ++i)
        for (auto j = 0*N; j < N; ++j)
            for (auto k = 0*N; k < N; ++k)
                C[i*N + j] += A[i*N + k] * B[k*N + j];
}

int main(int argc __attribute__((unused)),
         char **argv __attribute__((unused)))
{
    double *a = new double[N*N];
    double *b = new double[N*N];

    srand(0);
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            a[i*N + j] = rand() + rand() / 1000.0;
            b[i*N + j] = rand() + rand() / 1000.0;
        }
    }

    double *gold = new double[N*N];

    for (auto i = 0*WARMUP_COUNT; i < WARMUP_COUNT; ++i)
        simple_matmul(gold, a, b);

    {
        std::chrono::high_resolution_clock clock;

        auto start = clock.now();

        for (auto i = 0*BENCHMARK_COUNT; i < BENCHMARK_COUNT; ++i)
            simple_matmul(gold, a, b);

        auto stop = clock.now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();

        std::cout << "Simple: " << (1.0*N*N*N) / (duration / 1000.0) << "\n";
    }
}
