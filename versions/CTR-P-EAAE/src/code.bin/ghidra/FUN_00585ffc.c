/**
 * FUN_00585ffc.c
 * Source line: 832228
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00585ffc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_006a5b68();
  if (iVar1 != 0) {
    iVar1 = FUN_00584134();
    *(undefined1 *)(iVar1 + 0x32) = 1;
          // WARNING: Could not recover jumptable at 0x0058602c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}
