/**
 * FUN_004ee364.c
 * Source line: 736210
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_004ee364(int param_1,int param_2)

{
          // WARNING: Could not recover jumptable at 0x004ee378. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x10))
            (*(int **)(param_1 + 4),*(undefined4 *)(param_2 * 4 + 0x9c90c4));
  return;
}
