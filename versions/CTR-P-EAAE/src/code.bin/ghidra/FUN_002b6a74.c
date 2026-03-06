/**
 * FUN_002b6a74.c
 * Source line: 354180
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_002b6a74(int *param_1)

{
  FUN_002b6cac(param_1,param_1 + 0x1c);
  FUN_002b6cac(param_1,param_1 + 0x26);
          // WARNING: Could not recover jumptable at 0x002b6aa0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}
