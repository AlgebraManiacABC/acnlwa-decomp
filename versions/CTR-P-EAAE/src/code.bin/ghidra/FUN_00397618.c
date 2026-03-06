/**
 * FUN_00397618.c
 * Source line: 503573
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00397618(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_18;
  
  piVar1 = *(int **)(param_2 + 0x18);
  local_18 = param_4;
  (**(code **)(*piVar1 + 8))(piVar1);
  local_18 = *param_3;
  FUN_0035af24(param_1,param_2,&local_18);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
