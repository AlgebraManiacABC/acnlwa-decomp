/**
 * FUN_007d5d70.c
 * Source line: 1181066
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007d5d70(int param_1,undefined4 param_2)

{
  int *piVar1;
  int local_18 [2];
  
  (**(code **)(*piRam00982088 + 0xc))(piRam00982088,param_2,local_18);
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))();
  }
  *(int *)(param_1 + 4) = local_18[0];
  return;
}
