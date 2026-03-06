/**
 * FUN_0013e9e4.c
 * Source line: 151073
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0013e9e4(undefined4 *param_1)

{
  if (*(int *)*param_1 == -0x80000000) {
          // WARNING: Could not recover jumptable at 0x0013ea0c. Too many branches
          // WARNING: Treating indirect jump as call
    (*pcRam009750e4)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
          // WARNING: Could not recover jumptable at 0x0013ea04. Too many branches
          // WARNING: Treating indirect jump as call
    (*pcRam009750e8)();
    return;
  }
  return;
}
