/**
 * FUN_003d0d3c.c
 * Source line: 542653
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003d0d3c(void)

{
  int iVar1;
  
  iVar1 = FUN_003d0d6c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d0d5c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
