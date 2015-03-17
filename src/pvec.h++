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
public:
    struct array_type {
        T data[N] __attribute__(( aligned(32) ));
    };

private:
    struct array_type _data;

public:
    pvec(const T& value) {
        for (auto i = 0*N; i < N; ++i)
            _data.data[i] = value;
    }

    pvec(const T *base) {
        *((struct array_type *)&_data) = *((struct array_type *)base);
    }

    pvec(const pvec<T, N>& other) {
        *((struct array_type *)&_data) = *((struct array_type *)&other._data);
    }

public:
    const T& operator[](size_t i) const {
        return _data.data[i];
    }

    T& operator[](size_t i) {
        return _data.data[i];
    }

public:
    void store(T *base) {
        *((struct array_type *)base) = *((struct array_type *)&_data);
    }
};

template<class T, int N>
pvec<T, N> operator*(const pvec<T, N>& a, const pvec<T, N>& b) {
    typename pvec<T, N>::array_type out;
    for (auto i = 0*N; i < N; ++i)
        out.data[i] = a[i] * b[i];
    return pvec<T, N>(out.data);
}

template<class T, int N>
pvec<T, N> operator*(const T& a, const pvec<T, N>& b) {
    typename pvec<T, N>::array_type out;
    for (auto i = 0*N; i < N; ++i)
        out.data[i] = a * b[i];
    return pvec<T, N>(out.data);
}

template<class T, int N>
pvec<T, N> operator*(const pvec<T, N>& a, const T& b) {
    typename pvec<T, N>::array_type out;
    for (auto i = 0*N; i < N; ++i)
        out.data[i] = a[i] * b;
    return pvec<T, N>(out.data);
}

template<class T, int N>
pvec<T, N> operator+=(pvec<T, N>& a, const pvec<T, N>& b) {
    for (auto i = 0*N; i < N; ++i)
        a[i] += b[i];
    return a;
}

#endif
