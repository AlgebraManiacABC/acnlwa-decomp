/**
 * FUN_00542a6c.c
 * Source line: 786232
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00542a6c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0074bf70(*(undefined4 *)(param_1 + 0x144));
  iVar2 = FUN_0073e600(param_1 + 4,uVar1);
  *(int *)(param_1 + 0x130) = iVar2;
  if (iVar2 != 0) {
    iVar2 += param_2;
  }
  FUN_00542ad4(param_1,uVar1,iVar2,param_3,param_4,param_5);
  return;
}
