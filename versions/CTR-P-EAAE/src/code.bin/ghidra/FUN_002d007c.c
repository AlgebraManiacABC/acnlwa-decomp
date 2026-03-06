/**
 * FUN_002d007c.c
 * Source line: 369325
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_002d007c(int *param_1)

{
  (**(code **)(*param_1 + 0x4c))(param_1,0);
          // WARNING: Could not recover jumptable at 0x002d00ac. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}
