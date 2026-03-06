/**
 * FUN_0076f38c.c
 * Source line: 1132401
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0076f38c(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x67cc)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x67d4) + param_2 * 4);
  }
  else {
    piVar1 = NULL;
  }
          // WARNING: Could not recover jumptable at 0x0076f3b0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xa0))();
  return;
}
