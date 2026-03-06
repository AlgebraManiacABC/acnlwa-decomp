/**
 * FUN_00324944.c
 * Source line: 426726
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00324944(int *param_1)

{
  if (param_1 != NULL) {
          // WARNING: Could not recover jumptable at 0x00324954. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}
