/**
 * FUN_00347518.c
 * Source line: 444085
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00347518(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0 && param_2 != NULL) {
    FUN_00142964(1);
          // WARNING: Could not recover jumptable at 0x00347560. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)*param_2)(param_2,param_1,param_3,param_4);
    return;
  }
  return;
}
