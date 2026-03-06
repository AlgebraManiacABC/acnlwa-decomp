/**
 * FUN_0024f71c.c
 * Source line: 301419
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0024f71c(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0024f72c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}
