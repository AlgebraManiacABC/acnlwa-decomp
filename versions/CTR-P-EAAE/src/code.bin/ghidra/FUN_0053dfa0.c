/**
 * FUN_0053dfa0.c
 * Source line: 782913
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0053dfa0(int *param_1,int param_2,int param_3)

{
  if (((char)param_1[0x13] != '\0' && param_3 != 0) && param_2 != 0) {
          // WARNING: Could not recover jumptable at 0x0053dfc0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x4c))();
    return;
  }
  return;
}
