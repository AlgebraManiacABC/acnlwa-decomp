/**
 * FUN_00415be0.c
 * Source line: 581511
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00415be0(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x78) != NULL) {
          // WARNING: Could not recover jumptable at 0x00415bf4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x78))(1,param_2,*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}
