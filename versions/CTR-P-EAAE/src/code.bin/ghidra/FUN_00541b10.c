/**
 * FUN_00541b10.c
 * Source line: 785682
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00541b10(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  (**(code **)(*param_1 + 0x44))(param_1);
          // WARNING: Could not recover jumptable at 0x00541b40. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}
