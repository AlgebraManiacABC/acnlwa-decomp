/**
 * FUN_0020ace4.c
 * Source line: 267316
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0020ace4(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x36) != param_2) {
    *(char *)((int)param_1 + 0x36) = (char)param_2;
          // WARNING: Could not recover jumptable at 0x0020ad00. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}
