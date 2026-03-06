/**
 * FUN_002ff160.c
 * Source line: 397239
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_002ff160(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00315788(param_1,param_2 + -1);
  iVar2 = FUN_00315788(param_1,param_2 + -2,param_3);
  if (iVar1 != 3 && iVar2 != 3) {
    FUN_00315788(param_1,param_2,param_3);
    uVar3 = FUN_005ce154();
    return uVar3;
  }
  return 0;
}
