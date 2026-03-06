/**
 * FUN_0020acc0.c
 * Source line: 267301
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0020acc0(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x37) != param_2) {
    *(char *)((int)param_1 + 0x37) = (char)param_2;
          // WARNING: Could not recover jumptable at 0x0020acdc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}
