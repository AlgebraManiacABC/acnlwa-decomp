/**
 * FUN_0039e650.c
 * Source line: 507194
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0039e650(void)

{
  int iVar1;
  
  iVar1 = FUN_0039e680();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0039e670. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
