/**
 * FUN_002ffb64.c
 * Source line: 397935
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002ffb64(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_00975338 == 0) {
    FUN_002f83b0(param_1);
    return;
  }
  if ((param_1 != 0) &&
     ((((cRam009752c0 != '\0' && (iVar1 = FUN_003045a8(), iVar1 != 0)) &&
       (piVar2 = (int *)FUN_00137f28(iVar1,param_1), piVar2 != NULL)) ||
      (piVar2 = (int *)FUN_00138fec(DAT_00975338,param_1), piVar2 != NULL)))) {
          // WARNING: Could not recover jumptable at 0x002ffbe8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
    return;
  }
  return;
}
