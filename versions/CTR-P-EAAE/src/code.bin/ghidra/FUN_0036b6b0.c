/**
 * FUN_0036b6b0.c
 * Source line: 473353
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0036b6b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0036b6e0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036b6d0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
