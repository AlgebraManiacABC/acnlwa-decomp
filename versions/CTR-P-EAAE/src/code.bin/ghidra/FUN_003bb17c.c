/**
 * FUN_003bb17c.c
 * Source line: 528411
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003bb17c(void)

{
  int iVar1;
  
  iVar1 = FUN_003bb1ac();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003bb19c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
