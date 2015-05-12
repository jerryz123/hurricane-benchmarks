#ifndef LIBVECTOR__ARCH__AVX2__VREG_HXX
#define LIBVECTOR__ARCH__AVX2__VREG_HXX

#include <cassert>

namespace libvector {
  template<> class vreg<double, 4, 0> {
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm0");
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
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm0");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm0");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm0");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm0");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm0");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm0");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm0");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm0");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm0");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm0");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm0");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm0");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm0");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm0");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm0");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm0");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm0");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm0");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm0");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm0");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm0");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm0");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm0");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm0");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm0");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm0");
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

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm0"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm0,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 1> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm1,%ymm1,%ymm1");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm1");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm1");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm1");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm1");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm1");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm1");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm1");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm1");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm1");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm1");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm1");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm1");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm1");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm1");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm1");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm1");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm1");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm1");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm1");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm1");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm1");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm1");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm1");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm1");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm1");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm1");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm1");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm1");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm1");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm1");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm1");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm1");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm1");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm1"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm1"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm1,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 2> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm2,%ymm2,%ymm2");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm2");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm2");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm2");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm2");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm2");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm2");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm2");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm2");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm2");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm2");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm2");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm2");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm2");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm2");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm2");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm2");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm2");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm2");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm2");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm2");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm2");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm2");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm2");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm2");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm2");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm2");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm2");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm2");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm2");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm2");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm2");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm2");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm2");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm2"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm2"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm2,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 3> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm3,%ymm3,%ymm3");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm3");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm3");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm3");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm3");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm3");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm3");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm3");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm3");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm3");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm3");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm3");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm3");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm3");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm3");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm3");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm3");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm3");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm3");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm3");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm3");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm3");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm3");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm3");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm3");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm3");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm3");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm3");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm3");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm3");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm3");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm3");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm3");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm3");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm3"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm3"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm3,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 4> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm4,%ymm4,%ymm4");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm4");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm4");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm4");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm4");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm4");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm4");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm4");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm4");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm4");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm4");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm4");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm4");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm4");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm4");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm4");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm4");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm4");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm4");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm4");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm4");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm4");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm4");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm4");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm4");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm4");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm4");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm4");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm4");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm4");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm4");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm4");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm4");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm4");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm4"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm4"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm4,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 5> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm5,%ymm5,%ymm5");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm5");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm5");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm5");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm5");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm5");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm5");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm5");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm5");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm5");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm5");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm5");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm5");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm5");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm5");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm5");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm5");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm5");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm5");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm5");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm5");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm5");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm5");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm5");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm5");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm5");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm5");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm5");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm5");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm5");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm5");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm5");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm5");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm5");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm5"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm5"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm5,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 6> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm6,%ymm6,%ymm6");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm6");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm6");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm6");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm6");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm6");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm6");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm6");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm6");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm6");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm6");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm6");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm6");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm6");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm6");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm6");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm6");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm6");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm6");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm6");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm6");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm6");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm6");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm6");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm6");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm6");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm6");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm6");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm6");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm6");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm6");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm6");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm6");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm6");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm6"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm6"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm6,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 7> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm7,%ymm7,%ymm7");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm7");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm7");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm7");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm7");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm7");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm7");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm7");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm7");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm7");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm7");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm7");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm7");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm7");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm7");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm7");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm7");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm7");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm7");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm7");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm7");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm7");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm7");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm7");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm7");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm7");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm7");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm7");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm7");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm7");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm7");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm7");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm7");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm7");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm7"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm7"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm7,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 8> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm8,%ymm8,%ymm8");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm8");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm8");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm8");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm8");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm8");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm8");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm8");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm8");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm8");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm8");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm8");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm8");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm8");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm8");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm8");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm8");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm8");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm8");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm8");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm8");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm8");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm8");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm8");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm8");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm8");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm8");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm8");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm8");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm8");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm8");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm8");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm8");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm8");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm8"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm8"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm8,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 9> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm9,%ymm9,%ymm9");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm9");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm9");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm9");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm9");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm9");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm9");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm9");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm9");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm9");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm9");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm9");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm9");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm9");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm9");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm9");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm9");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm9");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm9");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm9");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm9");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm9");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm9");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm9");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm9");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm9");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm9");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm9");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm9");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm9");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm9");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm9");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm9");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm9");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm9"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm9"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm9,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 10> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm10,%ymm10,%ymm10");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm10");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm10");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm10");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm10");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm10");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm10");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm10");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm10");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm10");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm10");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm10");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm10");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm10");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm10");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm10");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm10");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm10");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm10");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm10");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm10");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm10");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm10");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm10");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm10");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm10");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm10");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm10");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm10");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm10");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm10");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm10");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm10");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm10");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm10"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm10"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm10,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 11> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm11,%ymm11,%ymm11");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm11");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm11");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm11");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm11");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm11");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm11");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm11");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm11");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm11");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm11");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm11");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm11");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm11");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm11");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm11");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm11");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm11");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm11");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm11");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm11");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm11");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm11");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm11");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm11");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm11");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm11");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm11");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm11");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm11");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm11");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm11");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm11");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm11");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm11"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm11"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm11,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 12> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm12,%ymm12,%ymm12");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm12");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm12");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm12");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm12");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm12");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm12");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm12");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm12");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm12");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm12");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm12");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm12");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm12");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm12");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm12");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm12");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm12");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm12");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm12");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm12");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm12");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm12");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm12");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm12");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm12");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm12");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm12");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm12");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm12");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm12");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm12");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm12");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm12");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm12"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm12"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm12,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 13> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm13,%ymm13,%ymm13");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm13");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm13");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm13");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm13");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm13");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm13");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm13");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm13");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm13");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm13");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm13");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm13");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm13");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm13");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm13");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm13");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm13");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm13");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm13");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm13");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm13");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm13");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm13");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm13");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm13");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm13");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm13");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm13");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm13");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm13");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm13");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm13");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm13");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm13"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm13"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm13,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 14> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm14,%ymm14,%ymm14");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm14");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm14");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm14");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm14");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm14");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm14");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm14");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm14");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm14");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm14");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm14");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm14");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm14");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm14");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm14");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm14");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm14");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm14");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm14");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm14");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm14");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm14");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm14");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm14");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm14");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm14");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm14");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm14");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm14");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm14");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm14");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm14");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm14");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm14"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm14"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm14,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 15> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm15,%ymm15,%ymm15");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm15");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm15");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm15");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm15");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm15");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm15");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm15");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm15");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm15");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm15");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm15");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm15");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm15");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm15");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm15");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm15");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm15");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm15");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm15");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm15");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm15");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm15");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm15");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm15");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm15");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm15");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm15");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm15");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm15");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm15");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm15");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm15");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm15");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm15"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm15"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm15,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
  template<> class vreg<double, 4, 16> {
  public:
    vreg(void) {}

    vreg(double value) {
      assert(value == 0.0);
      __asm__ volatile ("vxorpd %ymm16,%ymm16,%ymm16");
    }

    template<int ai, int bi>
    void fma(const vreg<double, 4, ai>& a __attribute__((unused)),
             const vreg<double, 4, bi>& b __attribute__((unused))) {
      switch (ai) {
      case 0:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm0, %ymm16, %ymm16");
          break;
        }
        break;
      case 1:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm1, %ymm16, %ymm16");
          break;
        }
        break;
      case 2:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm2, %ymm16, %ymm16");
          break;
        }
        break;
      case 3:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm3, %ymm16, %ymm16");
          break;
        }
        break;
      case 4:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm4, %ymm16, %ymm16");
          break;
        }
        break;
      case 5:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm5, %ymm16, %ymm16");
          break;
        }
        break;
      case 6:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm6, %ymm16, %ymm16");
          break;
        }
        break;
      case 7:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm7, %ymm16, %ymm16");
          break;
        }
        break;
      case 8:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm8, %ymm16, %ymm16");
          break;
        }
        break;
      case 9:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm9, %ymm16, %ymm16");
          break;
        }
        break;
      case 10:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm10, %ymm16, %ymm16");
          break;
        }
        break;
      case 11:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm11, %ymm16, %ymm16");
          break;
        }
        break;
      case 12:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm12, %ymm16, %ymm16");
          break;
        }
        break;
      case 13:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm13, %ymm16, %ymm16");
          break;
        }
        break;
      case 14:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm14, %ymm16, %ymm16");
          break;
        }
        break;
      case 15:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm15, %ymm16, %ymm16");
          break;
        }
        break;
      case 16:
        switch (bi) {
        case 0:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm0, %ymm16");
          break;
        case 1:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm1, %ymm16");
          break;
        case 2:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm2, %ymm16");
          break;
        case 3:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm3, %ymm16");
          break;
        case 4:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm4, %ymm16");
          break;
        case 5:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm5, %ymm16");
          break;
        case 6:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm6, %ymm16");
          break;
        case 7:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm7, %ymm16");
          break;
        case 8:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm8, %ymm16");
          break;
        case 9:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm9, %ymm16");
          break;
        case 10:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm10, %ymm16");
          break;
        case 11:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm11, %ymm16");
          break;
        case 12:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm12, %ymm16");
          break;
        case 13:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm13, %ymm16");
          break;
        case 14:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm14, %ymm16");
          break;
        case 15:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm15, %ymm16");
          break;
        case 16:
          __asm__ volatile("vfmadd231pd %ymm16, %ymm16, %ymm16");
          break;
        }
        break;
      }
    }

    void load(const double* in_ptr) {
      __asm__ volatile ("vmovapd (%0),%%ymm16"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void splat(const double* in_ptr) {
      __asm__ volatile ("vbroadcastsd (%0),%%ymm16"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }

    void store(const double* in_ptr) {
      __asm__ volatile ("vmovapd %%ymm16,(%0)"
                        :
                        : "r"(in_ptr)
                        : "memory"
                );
    }
  };
}

#endif
