/**
 * FUN_0050c648.c
 * Source line: 750417
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0050c648(int *param_1)

{
  FUN_0050c5b4(param_1,1);
  (**(code **)(*param_1 + 8))(param_1);
          // WARNING: Could not recover jumptable at 0x0050c678. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}
