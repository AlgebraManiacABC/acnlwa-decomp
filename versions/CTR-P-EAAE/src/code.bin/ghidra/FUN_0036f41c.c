/**
 * FUN_0036f41c.c
 * Source line: 476558
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0036f41c(void)

{
  int iVar1;
  
  iVar1 = FUN_0036f450();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036f43c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
