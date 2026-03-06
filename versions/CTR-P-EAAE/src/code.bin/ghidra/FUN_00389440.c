/**
 * FUN_00389440.c
 * Source line: 493745
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00389440(void)

{
  int iVar1;
  
  iVar1 = FUN_00389470();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00389460. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
