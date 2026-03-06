/**
 * FUN_001316b8.c
 * Source line: 138039
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001316b8(int *param_1)

{
  if ((char)param_1[0x13] != '\0') {
          // WARNING: Could not recover jumptable at 0x001316d0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}
