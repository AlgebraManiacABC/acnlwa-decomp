/**
 * FUN_002c4a9c.c
 * Source line: 364077
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002c4a9c(int param_1)

{
  FUN_005779a4();
  if (*(int **)(param_1 + 0x660) == _DAT_0094d934) {
          // WARNING: Could not recover jumptable at 0x002c4ac8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*_DAT_0094d934 + 0x144))();
    return;
  }
  return;
}
