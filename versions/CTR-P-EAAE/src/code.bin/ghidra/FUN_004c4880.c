/**
 * FUN_004c4880.c
 * Source line: 705130
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004c4880(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x004c48a0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[3],param_2);
    return;
  }
  return;
}
