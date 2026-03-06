/**
 * FUN_00377564.c
 * Source line: 482253
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00377564(void)

{
  int iVar1;
  
  iVar1 = FUN_00377594();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00377584. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
