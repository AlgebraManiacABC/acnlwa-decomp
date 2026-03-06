/**
 * FUN_0020ae0c.c
 * Source line: 267457
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0020ae0c(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x39) != param_2) {
    *(char *)((int)param_1 + 0x39) = (char)param_2;
          // WARNING: Could not recover jumptable at 0x0020ae24. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}
