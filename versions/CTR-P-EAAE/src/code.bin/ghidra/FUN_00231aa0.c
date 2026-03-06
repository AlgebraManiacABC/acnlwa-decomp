/**
 * FUN_00231aa0.c
 * Source line: 286274
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00231aa0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  *(char *)(param_1 + 0x20) = (char)param_3;
  uVar1 = FUN_00305f44();
  FUN_0018f6dc(_DAT_0094f3bc,uVar1,uVar2,param_3);
  return;
}
