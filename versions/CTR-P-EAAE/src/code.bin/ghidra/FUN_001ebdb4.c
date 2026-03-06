/**
 * FUN_001ebdb4.c
 * Source line: 252321
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001ebdb4(int param_1)

{
  byte *pbVar1;
  
  FUN_0027da40();
  pbVar1 = (byte *)FUN_0027d3cc(param_1);
  if (*(int *)(param_1 + 400) != (uint)(*pbVar1 >> 7) + (pbVar1[1] & 7) * 2) {
    FUN_007c7834(param_1 + 0x18c);
  }
  return;
}
