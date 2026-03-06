/**
 * FUN_0038fa4c.c
 * Source line: 498025
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0038fa4c(void)

{
  int iVar1;
  
  iVar1 = FUN_0038fa7c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x0038fa6c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
