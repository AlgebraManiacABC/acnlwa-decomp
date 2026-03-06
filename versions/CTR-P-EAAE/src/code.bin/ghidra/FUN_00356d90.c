/**
 * FUN_00356d90.c
 * Source line: 457880
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00356d90(void)

{
  int iVar1;
  
  iVar1 = FUN_00356dc0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00356db0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
