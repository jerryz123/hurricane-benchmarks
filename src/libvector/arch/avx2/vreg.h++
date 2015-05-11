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

#ifndef LIBVECTOR__ARCH__AVX2__VREG_HXX
#define LIBVECTOR__ARCH__AVX2__VREG_HXX

#include <cassert>

namespace libvector {
    template<> class vreg<double, 4, 0> {
    public:
        vreg(double value) {
            assert(value == 0.0);
            __asm__ volatile ("vxorpd %ymm0,%ymm0,%ymm0");
        }

        template <int ai, int bi>
        void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
                 const vreg<double, 4, bi>& b __attribute__((unused))) {
            switch (ai) {
            case 0:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm0");
                    break;
                }
                break;
            case 1:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm0");
                    break;
                }
                break;
            case 2:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm0");
                    break;
                }
                break;
            case 3:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm0");
                    break;
                }
                break;
            case 4:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm0");
                    break;
                }
                break;
            case 5:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm0");
                    break;
                }
                break;
            case 6:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm0");
                    break;
                }
                break;
            case 7:
                switch (bi) {
                case 0:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm0");
                    break;
                case 1:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm0");
                    break;
                case 2:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm0");
                    break;
                case 3:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm0");
                    break;
                case 4:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm0");
                    break;
                case 5:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm0");
                    break;
                case 6:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm0");
                    break;
                case 7:
                    __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm0");
                    break;
                }
                break;
            }
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm0"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void store(double* out_ptr) {
            __asm__ volatile ("vmovapd %%ymm0,(%0)"
                              :
                              : "r"(out_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 1> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm1"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm1"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 2> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm2"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm2"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 3> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm3"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm3"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 4> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm4"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm4"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 5> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm5"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm5"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 6> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm6"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm6"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };

    template<> class vreg<double, 4, 7> {
    public:
        void splat(const double* in_ptr) {
            __asm__ volatile ("vbroadcastsd (%0),%%ymm7"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }

        void load(const double* in_ptr) {
            __asm__ volatile ("vmovapd (%0),%%ymm7"
                              :
                              : "r"(in_ptr)
                              : "memory"
                );
        }
    };
}

#endif
