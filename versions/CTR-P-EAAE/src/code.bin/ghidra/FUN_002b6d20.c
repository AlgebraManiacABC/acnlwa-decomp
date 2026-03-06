/**
 * FUN_002b6d20.c
 * Source line: 354354
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002b6d20(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 0xd7) = 1;
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 8,1);
          // WARNING: Could not recover jumptable at 0x002b6d68. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x12,1);
    return;
  }
          // WARNING: Could not recover jumptable at 0x002b6d80. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1,0);
  return;
}
