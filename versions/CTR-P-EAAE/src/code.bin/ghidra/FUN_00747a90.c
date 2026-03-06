/**
 * FUN_00747a90.c
 * Source line: 1103697
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00747a90(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x3ff;
  if ((0x3ff < param_2) && (uVar1 < 0x200)) {
    uVar1 += 0x200;
  }
  return *(byte *)(param_1 + uVar1 + 0x1102c) & 1;
}
