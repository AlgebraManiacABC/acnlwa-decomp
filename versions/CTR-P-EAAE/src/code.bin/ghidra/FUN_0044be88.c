/**
 * FUN_0044be88.c
 * Source line: 612790
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0044be88(undefined4 param_1)

{
  if (*(code **)(iRam00974a64 + 0x60) + -0x100000 < (code *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x0044bea8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(iRam00974a64 + 0x60))(param_1);
    return;
  }
  return;
}
