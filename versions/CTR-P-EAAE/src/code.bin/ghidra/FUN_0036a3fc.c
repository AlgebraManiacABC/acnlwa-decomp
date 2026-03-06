/**
 * FUN_0036a3fc.c
 * Source line: 472484
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0036a3fc(void)

{
  int iVar1;
  
  iVar1 = FUN_0036a42c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036a41c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
