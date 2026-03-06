/**
 * FUN_004c4850.c
 * Source line: 705115
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004c4850(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x9d) = param_2;
  if (param_1[4] != 0) {
    FUN_00136d04(param_1[4],param_1);
  }
          // WARNING: Could not recover jumptable at 0x004c487c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}
