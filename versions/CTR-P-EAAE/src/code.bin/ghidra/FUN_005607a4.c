/**
 * FUN_005607a4.c
 * Source line: 805386
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_005607a4(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(param_1);
          // WARNING: Could not recover jumptable at 0x005607cc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}
