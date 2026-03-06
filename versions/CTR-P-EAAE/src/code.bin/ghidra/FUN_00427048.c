/**
 * FUN_00427048.c
 * Source line: 590933
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00427048(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int *)*param_1 != NULL) {
    uVar1 = (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_004286e4(param_1,param_2 + param_4,param_2,param_4);
  return uVar1;
}
