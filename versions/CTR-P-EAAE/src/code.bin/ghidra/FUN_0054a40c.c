/**
 * FUN_0054a40c.c
 * Source line: 790808
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0054a40c(int *param_1)

{
  (**(code **)(*param_1 + 0x58))(param_1);
          // WARNING: Could not recover jumptable at 0x0054a434. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}
