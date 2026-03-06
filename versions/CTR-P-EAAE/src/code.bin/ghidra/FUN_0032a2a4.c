/**
 * FUN_0032a2a4.c
 * Source line: 430207
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0032a2a4(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)FUN_00138fec(DAT_00975338,param_1);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x0032a2dc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    return;
  }
  return;
}
