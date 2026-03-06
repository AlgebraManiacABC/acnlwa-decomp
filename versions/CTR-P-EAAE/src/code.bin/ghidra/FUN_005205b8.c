/**
 * FUN_005205b8.c
 * Source line: 764015
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005205b8(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x3ff;
  if ((0x3ff < param_2) && (uVar2 < 0x200)) {
    uVar2 += 0x200;
  }
  pbVar1 = (byte *)(param_1 + uVar2 + 0x1102c);
  *pbVar1 = *pbVar1 | 4;
  return;
}
