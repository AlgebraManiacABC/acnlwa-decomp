/**
 * FUN_0013fefc.c
 * Source line: 152442
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0013fefc(int param_1,int *param_2)

{
  if (param_1 != 0 && param_2 != NULL) {
          // WARNING: Could not recover jumptable at 0x0013ff1c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 0xc))(param_2,param_1);
    return;
  }
  return;
}
