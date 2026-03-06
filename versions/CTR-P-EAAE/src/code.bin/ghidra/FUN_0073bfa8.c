/**
 * FUN_0073bfa8.c
 * Source line: 1095504
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0073bfa8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar1 != 0) {
          // WARNING: Could not recover jumptable at 0x0073bfdc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x28))(param_1,0);
    return;
  }
  return;
}
