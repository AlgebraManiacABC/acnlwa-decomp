/**
 * FUN_0039102c.c
 * Source line: 499111
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0039102c(void)

{
  int iVar1;
  
  iVar1 = FUN_0039105c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0039104c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
