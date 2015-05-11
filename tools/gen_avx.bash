#!/bin/bash

cat <<EOF
#ifndef LIBVECTOR__ARCH__AVX2__VREG_HXX
#define LIBVECTOR__ARCH__AVX2__VREG_HXX

#include <cassert>

namespace libvector {
EOF

for i in $(seq 0 7)
do
    cat <<EOF
  template<> class vreg<double, 4, $i> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm0,%ymm0,%ymm0");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
EOF

    for ai in $(seq 0 7)
    do
        cat <<EOF
      case $ai:
        switch (bi) {
EOF
        for bi in $(seq 0 7)
        do
            cat <<EOF
        case $bi:
          __asm__ volatile("vfmadd231pd %ymm$ai, %ymm$bi, %ymm$i");
          break;
EOF
        
        done
        cat <<EOF
        }
        break;
EOF
    done

    cat <<EOF
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm$i"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm$i"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm$i,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
EOF
done

cat <<EOF
}

#endif
EOF
