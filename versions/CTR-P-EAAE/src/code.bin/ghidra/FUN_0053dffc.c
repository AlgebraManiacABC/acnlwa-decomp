/**
 * FUN_0053dffc.c
 * Source line: 782927
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0053dffc(int *param_1,int param_2)

{
  if ((char)param_1[0x13] != '\0' && param_2 != 0) {
          // WARNING: Could not recover jumptable at 0x0053e018. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x50))();
    return;
  }
  return;
}
