/**
 * FUN_00834944.c
 * Source line: 1242326
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00834944(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    param_1[1] = iVar1;
  }
  FUN_008346bc(param_1,iVar1,param_2,param_3);
  return;
}
