/**
 * FUN_004f68c4.c
 * Source line: 741513
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004f68c4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(*(int **)(param_1 + 0x24),0);
          // WARNING: Could not recover jumptable at 0x004f68f4. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))(*(int **)(param_1 + 0x28),0);
  return;
}
