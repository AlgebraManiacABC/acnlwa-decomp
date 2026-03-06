/**
 * FUN_00537b6c.c
 * Source line: 778954
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00537b6c(uint param_1)

{
  uint uVar1;
  
  param_1 -= param_1 >> 1 & 0x55555555;
  uVar1 = (param_1 >> 2 & 0x33333333) + (param_1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 += uVar1 >> 8;
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}
