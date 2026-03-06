/**
 * FUN_0036cc0c.c
 * Source line: 474515
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0036cc0c(void)

{
  int iVar1;
  
  iVar1 = FUN_0036cc3c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0036cc2c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
