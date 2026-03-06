/**
 * FUN_00347454.c
 * Source line: 444025
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00347454(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x00347464. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}
