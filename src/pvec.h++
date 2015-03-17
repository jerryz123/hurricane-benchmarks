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

#include <stdlib.h>

#ifndef PVEC_HXX
#define PVEC_HXX

template<class T, int N> class pvec {
private:
    struct array_type {
        T data[N] __attribute__(( aligned(sizeof(T) * N) ));
    };

    struct array_type _data;

public:
    pvec(const T& value) {
        for (auto i = 0*N; i < N; ++i)
            _data.data[i] = value;
    }

    pvec(const T *base) {
        *((struct array_type *)&_data) = *((struct array_type *)base);
    }

public:
    const T& operator[](size_t i) const {
        return _data.data[i];
    }

    void operator+=(const pvec<T, N>& other) {
        for (auto i = 0*N; i < N; ++i)
            _data.data[i] += other[i];
    }

public:
    void store(T *base) {
        *((struct array_type *)base) = *((struct array_type *)&_data);
    }
};

template<class T, int N>
pvec<T, N> operator*(const pvec<T, N>& a, const pvec<T, N>& b) {
    T out[N];
    for (auto i = 0*N; i < N; ++i)
        out[i] = a[i] * b[i];
    return pvec<T, N>(out);
}

template<class T, int N>
pvec<T, N> operator*(const T& a, const pvec<T, N>& b) {
    T out[N];
    for (auto i = 0*N; i < N; ++i)
        out[i] = a * b[i];
    return pvec<T, N>(out);
}

template<class T, int N>
pvec<T, N> operator*(const pvec<T, N>& a, const T& b) {
    T out[N];
    for (auto i = 0*N; i < N; ++i)
        out[i] = a[i] * b;
    return pvec<T, N>(out);
}

#endif
