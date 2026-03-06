/**
 * FUN_0056a734.c
 * Source line: 811958
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0056a734(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_3 = 1;
  }
          // WARNING: Could not recover jumptable at 0x0056a74c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2 + param_3);
  return;
}
