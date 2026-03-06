/**
 * FUN_00368e28.c
 * Source line: 471384
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00368e28(void)

{
  int iVar1;
  
  iVar1 = FUN_00368e58();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00368e48. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
