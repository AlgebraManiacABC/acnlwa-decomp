/**
 * FUN_0011d4fc.c
 * Source line: 120470
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0011d4fc(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0011d50c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  return;
}
