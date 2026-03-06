/**
 * FUN_00779500.c
 * Source line: 1135865
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00779500(undefined4 param_1)

{
  int *piVar1;
  
  if (DAT_00975338 == 0) {
    FUN_002f75a0(param_1);
    return;
  }
  piVar1 = (int *)FUN_003045a8(DAT_00975338);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x001312f0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x18))(piVar1,param_1,4);
    return;
  }
  return;
}
