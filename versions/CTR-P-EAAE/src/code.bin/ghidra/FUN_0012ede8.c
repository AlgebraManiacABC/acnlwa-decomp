/**
 * FUN_0012ede8.c
 * Source line: 135522
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0012ede8(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0012edf8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  return;
}
