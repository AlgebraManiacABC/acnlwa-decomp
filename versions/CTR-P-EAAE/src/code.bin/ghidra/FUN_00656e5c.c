/**
 * FUN_00656e5c.c
 * Source line: 965579
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00656e5c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  
  iVar1 = FUN_0070ae20(param_2 + 0x1b4);
  if (*(short *)(param_2 + iVar1 * 2 + 0x224) == 0x126) {
    uVar2 = FUN_0070acac(extraout_s0,param_2 + 0x1b4);
  }
  else {
    uVar2 = 0;
  }
  FUN_0068db1c(uVar2,0x3f800000,param_1,param_1,param_1,param_2,0xae,1,0,1);
  return;
}
