/**
 * FUN_003d6330.c
 * Source line: 547475
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003d6330(void)

{
  int iVar1;
  
  iVar1 = FUN_003d6360();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d6350. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iVar1 + -8))();
    return;
  }
  FUN_002f83b0();
  return;
}
