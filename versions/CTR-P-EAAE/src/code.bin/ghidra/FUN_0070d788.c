/**
 * FUN_0070d788.c
 * Source line: 1065102
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0070d788(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x174))(param_1,param_2,0,0,0,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00752690(param_1,param_2);
    return uVar2;
  }
  return 0;
}
