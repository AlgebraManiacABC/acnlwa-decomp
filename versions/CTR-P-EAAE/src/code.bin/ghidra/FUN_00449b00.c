/**
 * FUN_00449b00.c
 * Source line: 611160
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00449b00(int param_1)

{
  if (*(code **)(param_1 + 0x5c) + -0x100000 < (code *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00449b18. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x5c))(0);
    return;
  }
  return;
}
