/**
 * __ARM_fpclassifyf.c
 * Source line: 1136093
 * Body lines: 15
 */
#include "../../../include/types.h"

uint __ARM_fpclassifyf(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x7fffff) != 0) {
    uVar1 = 4;
  }
  if ((param_1 << 1) >> 0x18 != 0) {
    uVar1 |= 1;
  }
  if ((~(param_1 << 1) & 0xff000000) == 0) {
    uVar1 |= 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}
