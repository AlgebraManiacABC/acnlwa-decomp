/**
 * FUN_001d7f24.c
 * Source line: 240744
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001d7f24(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  param_1 += param_3 * 4;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    FUN_00136e58(iVar1,0);
  }
  FUN_006b1d88(DAT_0094d080,param_1 + 0x2c,param_2);
  return;
}
