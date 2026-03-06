/**
 * FUN_0035c378.c
 * Source line: 461928
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0035c378(void)

{
  int iVar1;
  
  iVar1 = FUN_0035c3a8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0035c398. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
