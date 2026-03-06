/**
 * FUN_00361988.c
 * Source line: 465928
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00361988(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036199c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
