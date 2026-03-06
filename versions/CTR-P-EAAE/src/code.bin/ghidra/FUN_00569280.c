/**
 * FUN_00569280.c
 * Source line: 810804
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00569280(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_2 + 0x1c) = 1;
          // WARNING: Could not recover jumptable at 0x005692ac. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_2 + 0x18) + 0x18))(*(int **)(param_2 + 0x18),param_3,param_4,0);
  return;
}
