/**
 * FUN_006dab3c.c
 * Source line: 1036657
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006dab3c(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 < *(uint *)(param_1 + 0x67cc)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x67d4) + param_3 * 4);
  }
  else {
    piVar1 = NULL;
  }
          // WARNING: Could not recover jumptable at 0x006dab60. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0x9c))();
  return;
}
