/**
 * FUN_0037e970.c
 * Source line: 487259
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0037e970(void)

{
  int iVar1;
  
  iVar1 = FUN_0037e9a0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0037e990. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
