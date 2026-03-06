/**
 * FUN_00300a74.c
 * Source line: 398647
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00300a74(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00315788(param_1,param_2 + -1);
  iVar2 = FUN_00315788(param_1,param_2 + -2,param_3);
  if (iVar1 != 3 && iVar2 != 3) {
    FUN_00315788(param_1,param_2,param_3);
    uVar3 = FUN_005cdfb8();
    return uVar3;
  }
  return 2;
}
