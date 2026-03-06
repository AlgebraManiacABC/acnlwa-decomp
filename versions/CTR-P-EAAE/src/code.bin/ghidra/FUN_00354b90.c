/**
 * FUN_00354b90.c
 * Source line: 456059
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00354b90(void)

{
  int iVar1;
  
  iVar1 = FUN_00376c98();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00354bb4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
