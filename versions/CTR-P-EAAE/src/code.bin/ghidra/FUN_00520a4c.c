/**
 * FUN_00520a4c.c
 * Source line: 764184
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00520a4c(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x3ff;
  if ((0x3ff < param_2) && (uVar2 < 0x200)) {
    uVar2 += 0x200;
  }
  pbVar1 = (byte *)(param_1 + uVar2 + 0x1102c);
  *pbVar1 = *pbVar1 | 1;
  return;
}
