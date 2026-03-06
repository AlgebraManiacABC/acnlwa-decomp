/**
 * FUN_004b7298.c
 * Source line: 695294
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004b7298(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((param_3 != 0) && (piVar1 = (int *)param_1[5], piVar1 != param_1 + 5)) {
    do {
      (**(code **)(piVar1[-1] + 0x40))(piVar1 + -1,param_2,param_3);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != param_1 + 5);
  }
  return;
}
