/**
 * FUN_004f988c.c
 * Source line: 742518
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004f988c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x28))(piVar1,0);
          // WARNING: Could not recover jumptable at 0x004f98c0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x10))(piVar1);
    return;
  }
  return;
}
