/**
 * FUN_0053814c.c
 * Source line: 779325
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0053814c(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00749030(uRam0097d40c,param_1);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0053817c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    return;
  }
  return;
}
