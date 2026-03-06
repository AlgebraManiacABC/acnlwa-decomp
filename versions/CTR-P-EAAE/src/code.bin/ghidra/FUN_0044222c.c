/**
 * FUN_0044222c.c
 * Source line: 607242
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0044222c(int *param_1)

{
  (**(code **)(*param_1 + 0x34))(param_1);
          // WARNING: Could not recover jumptable at 0x00442254. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}
