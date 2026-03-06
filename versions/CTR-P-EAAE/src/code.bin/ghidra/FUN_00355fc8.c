/**
 * FUN_00355fc8.c
 * Source line: 457119
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00355fc8(void)

{
  int iVar1;
  
  iVar1 = FUN_00355ff8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00355fe8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
