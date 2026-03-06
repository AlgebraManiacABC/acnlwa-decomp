/**
 * FUN_004d57a4.c
 * Source line: 718105
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004d57a4(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffffff9f;
  if ((~param_2 & 0x180) == 0) {
    uVar1 |= 0x40;
  }
  if ((~param_2 & 0x240) == 0) {
    uVar1 |= 0x20;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffff81f | uVar1;
  return;
}
