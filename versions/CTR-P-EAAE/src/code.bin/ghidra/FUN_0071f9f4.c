/**
 * FUN_0071f9f4.c
 * Source line: 1077019
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0071f9f4(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0x1f) & *(uint *)(param_1 + (uVar1 >> 5) * 4 + 0xc)) != 0) {
      FUN_005cd9c4(param_2,uVar1 & 0xff);
    }
    uVar1 += 1;
  } while (uVar1 < 0x51);
  return;
}
