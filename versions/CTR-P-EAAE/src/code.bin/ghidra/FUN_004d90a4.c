/**
 * FUN_004d90a4.c
 * Source line: 720637
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004d90a4(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),param_2);
          // WARNING: Could not recover jumptable at 0x004d90d8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x30))(*(int **)(param_1 + 8),param_2);
  return;
}
