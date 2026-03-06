/**
 * FUN_0039268c.c
 * Source line: 500365
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0039268c(void)

{
  int iVar1;
  
  iVar1 = FUN_003926bc();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003926ac. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
