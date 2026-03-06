/**
 * FUN_005851fc.c
 * Source line: 831553
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005851fc(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '7') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[2] = 0x10000b0;
          // WARNING: Could not recover jumptable at 0x0058521c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}
