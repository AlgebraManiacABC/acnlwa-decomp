/**
 * FUN_002132b4.c
 * Source line: 272337
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002132b4(int *param_1)

{
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
          // WARNING: Could not recover jumptable at 0x002132cc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x14))();
  return;
}
