/**
 * FUN_00585158.c
 * Source line: 831481
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00585158(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '\"') {
    piVar1 = *(int **)(param_1 + 8);
    piVar1[5] = 8;
          // WARNING: Could not recover jumptable at 0x00585178. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
