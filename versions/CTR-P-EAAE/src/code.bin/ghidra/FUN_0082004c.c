/**
 * FUN_0082004c.c
 * Source line: 1231134
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0082004c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (iVar1 != 0) {
    FUN_004c331c(&local_10,iVar1);
    if (local_10 != 0) {
      FUN_004c7500(local_10,0xf,param_3);
    }
    FUN_00130ed8(&local_10);
  }
  return iVar1;
}
