/**
 * FUN_005851d4.c
 * Source line: 831535
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005851d4(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '7') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[5] = 5;
          // WARNING: Could not recover jumptable at 0x005851f4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
