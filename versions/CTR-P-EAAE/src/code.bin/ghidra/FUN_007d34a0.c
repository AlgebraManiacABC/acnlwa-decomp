/**
 * FUN_007d34a0.c
 * Source line: 1179291
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_007d34a0(void)

{
  int iVar1;
  
  iVar1 = FUN_003827d4();
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x007d34b8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
