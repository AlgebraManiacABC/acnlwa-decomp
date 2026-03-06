/**
 * FUN_00113468.c
 * Source line: 113722
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00113468(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 += 0x8ee;
  do {
    iVar1 = FUN_002fbd54(param_1);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xdf;
    }
    uVar2 += 1;
    param_1 += 0xf2;
  } while (uVar2 < 0x10);
  return;
}
