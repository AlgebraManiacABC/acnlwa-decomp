/**
 * FUN_0053ac4c.c
 * Source line: 780538
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0053ac4c(undefined4 param_1,int *param_2)

{
  if ((param_2 == NULL) && (param_2 = (int *)FUN_00749010(uRam0097d40c), param_2 == NULL)) {
    return;
  }
          // WARNING: Could not recover jumptable at 0x0053ac84. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x18))(param_2,param_1,4);
  return;
}
