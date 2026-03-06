/**
 * FUN_0031b3b2.c
 * Source line: 420541
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_0031b3b2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = param_3;
  iVar1 = FUN_00307978(param_3,0,param_3,param_4,param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    iVar1 = strlen();
    uVar2 = FUN_003075cc(iVar1 + 1);
    FUN_00307990(uVar2,param_1[1]);
    param_1[1] = uVar2;
  }
  FUN_00307978(param_3,param_2);
  return param_1;
}
