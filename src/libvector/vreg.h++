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

#ifndef LIBVECTOR__VREG_HXX
#define LIBVECTOR__VREG_HXX

namespace libvector {
    /* A vector of fixed maximum length.  These are allocated by the
     * programmer.*/
    template<class datum, int length, int index> class vreg {
    public:
        /* Doesn't initialize a register. */
        vreg(void);

        /* Initializes a new register to a constant value across the
         * whole register. */
        vreg(datum value);

    public:
        /* Performs a fused multiply-add, storing the result into this
         * register. */
        template <int ai, int bi>
        void fma(const vreg<datum, length, ai>& a,
                 const vreg<datum, length, bi>& b);

        /* Memory */
        void load(const datum* in_ptr);
        void splat(const datum* in_ptr);
        void store(datum* out_ptr);
    };
}

/* This has to go later, as it has template specializations. */
#include "arch/vreg.h++"

#endif
