/**
 * FUN_0027dc64.c
 * Source line: 326020
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0027dc64(int *param_1)

{
  if ((int *)*param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0027dc78. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)*param_1 + 0x9c))();
    return;
  }
  return;
}
