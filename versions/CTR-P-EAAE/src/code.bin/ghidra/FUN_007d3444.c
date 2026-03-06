/**
 * FUN_007d3444.c
 * Source line: 1179273
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_007d3444(void)

{
  int iVar1;
  
  iVar1 = FUN_003827d4();
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x007d345c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
