/**
 * FUN_0053ba18.c
 * Source line: 781260
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0053ba18(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
          // WARNING: Could not recover jumptable at 0x0053ba40. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}
