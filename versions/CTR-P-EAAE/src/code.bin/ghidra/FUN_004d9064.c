/**
 * FUN_004d9064.c
 * Source line: 720625
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004d9064(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x58))(*(int **)(param_1 + 4),param_2);
          // WARNING: Could not recover jumptable at 0x004d90a0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x58))(*(int **)(param_1 + 8),param_2,param_3);
  return;
}
