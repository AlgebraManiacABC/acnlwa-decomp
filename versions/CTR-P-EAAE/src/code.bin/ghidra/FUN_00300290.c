/**
 * FUN_00300290.c
 * Source line: 398127
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00300290(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00315788(param_1,param_2 + -1,0);
  iVar2 = FUN_00315788(param_1,param_2 + -2,0);
  if (iVar1 != 3 && iVar2 != 3) {
    FUN_00315788(param_1,param_2,0);
    uVar3 = FUN_005cdf68();
    return uVar3;
  }
  return 0;
}
