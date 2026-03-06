/**
 * FUN_002d0028.c
 * Source line: 369311
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002d0028(int *param_1)

{
  (**(code **)(*param_1 + 0x4c))(param_1,1);
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_005833b0(0x1000405);
          // WARNING: Could not recover jumptable at 0x002d0074. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,1,0);
  return;
}
