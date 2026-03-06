/**
 * FUN_004b98cc.c
 * Source line: 696992
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004b98cc(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d7dfc();
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar1,param_3);
  if ((param_3 & 1) == 0) {
    uVar1 = FUN_004d7928(param_1,uVar1,param_2 + 4);
  }
  _DAT_00974a7c = uVar1;
  return;
}
