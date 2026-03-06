/**
 * FUN_002f8bd8.c
 * Source line: 391544
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_002f8bd8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 << 1) >> 0x15 != 0) {
    uVar1 |= 1;
  }
  if ((param_2 << 1) >> 0x15 == 0x7ff) {
    uVar1 |= 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}
