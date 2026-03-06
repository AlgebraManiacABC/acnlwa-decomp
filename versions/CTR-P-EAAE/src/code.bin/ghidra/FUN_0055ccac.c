/**
 * FUN_0055ccac.c
 * Source line: 802725
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0055ccac(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))(param_1);
          // WARNING: Could not recover jumptable at 0x0055ccd4. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}
