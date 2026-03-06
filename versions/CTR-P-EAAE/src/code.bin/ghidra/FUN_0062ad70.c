/**
 * FUN_0062ad70.c
 * Source line: 943633
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0062ad70(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  pbVar2 = (byte *)(param_1 + param_2 + 0x8b1);
  *pbVar2 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_0075f1f8(DAT_0095362c + 0xb0,auStack_18,param_2);
  iVar1 = FUN_001aa94c(DAT_009529cc,auStack_18);
  if (iVar1 != 0) {
    *pbVar2 = *pbVar2 | 8;
  }
  return;
}
