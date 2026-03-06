/**
 * FUN_00112f9c.c
 * Source line: 113633
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00112f9c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  if (param_3 == 0) {
    FUN_003091e0();
    param_3 = FUN_003091ec();
  }
  if ((param_3 != 0) &&
     (iVar1 = FUN_00311f7c(param_1,param_2,param_3 + 0x55a6,param_4,uVar2), 0 < iVar1)) {
    FUN_00312434(param_3,iVar1,1);
  }
  return;
}
