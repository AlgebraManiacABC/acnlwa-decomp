/**
 * FUN_0034746c.c
 * Source line: 444039
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0034746c(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x00347480. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}
