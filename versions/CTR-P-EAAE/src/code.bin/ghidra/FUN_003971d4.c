/**
 * FUN_003971d4.c
 * Source line: 503292
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003971d4(void)

{
  int iVar1;
  
  iVar1 = FUN_00397204();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003971f4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
