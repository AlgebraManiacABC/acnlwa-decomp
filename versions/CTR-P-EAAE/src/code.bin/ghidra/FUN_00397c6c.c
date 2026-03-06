/**
 * FUN_00397c6c.c
 * Source line: 503945
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00397c6c(void)

{
  int iVar1;
  
  iVar1 = FUN_00397ca0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00397c8c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
