/**
 * FUN_003d2e14.c
 * Source line: 544512
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003d2e14(void)

{
  int iVar1;
  
  iVar1 = FUN_003d2e44();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d2e34. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
