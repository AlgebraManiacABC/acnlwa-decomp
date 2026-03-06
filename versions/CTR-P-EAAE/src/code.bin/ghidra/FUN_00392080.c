/**
 * FUN_00392080.c
 * Source line: 500080
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00392080(void)

{
  int iVar1;
  
  iVar1 = FUN_003920b0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003920a0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
