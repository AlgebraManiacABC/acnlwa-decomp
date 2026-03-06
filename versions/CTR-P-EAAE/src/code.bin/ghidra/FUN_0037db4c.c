/**
 * FUN_0037db4c.c
 * Source line: 486685
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0037db4c(void)

{
  int iVar1;
  
  iVar1 = FUN_0037db7c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0037db6c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
