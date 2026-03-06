/**
 * FUN_007d5448.c
 * Source line: 1180632
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_007d5448(void)

{
  int iVar1;
  
  iVar1 = FUN_007d5478();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x007d5468. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
