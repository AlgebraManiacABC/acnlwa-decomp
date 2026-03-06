/**
 * FUN_00540544.c
 * Source line: 784745
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00540544(int param_1,undefined4 param_2)

{
          // WARNING: Could not recover jumptable at 0x00540554. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x60))
            (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  return;
}
