/**
 * FUN_003d1c5c.c
 * Source line: 543384
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003d1c5c(void)

{
  int iVar1;
  
  iVar1 = FUN_003d1c8c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d1c7c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
