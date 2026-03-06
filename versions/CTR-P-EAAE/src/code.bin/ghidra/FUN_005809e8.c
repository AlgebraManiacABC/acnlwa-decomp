/**
 * FUN_005809e8.c
 * Source line: 826508
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005809e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  FUN_00580a60(param_4,param_1,param_2,param_3);
  piVar1 = *(int **)(param_4 + 0x56c);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1,param_2,param_3);
  }
  piVar1 = *(int **)(param_4 + 0x598);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x00580a58. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1,param_2,param_3);
    return;
  }
  return;
}
