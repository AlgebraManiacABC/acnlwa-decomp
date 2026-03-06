/**
 * FUN_00631534.c
 * Source line: 947989
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00631534(int *param_1)

{
  if (param_1[0x40b] != 0 && param_1[0x40b] != -0x38) {
    FUN_0051f55c();
  }
          // WARNING: Could not recover jumptable at 0x00631560. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1a0))(param_1);
  return;
}
