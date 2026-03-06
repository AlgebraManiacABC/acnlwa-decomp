/**
 * FUN_003683a8.c
 * Source line: 470876
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003683a8(void)

{
  int iVar1;
  
  iVar1 = FUN_003683d8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003683c8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
