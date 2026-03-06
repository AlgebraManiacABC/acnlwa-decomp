/**
 * FUN_002f71e4.c
 * Source line: 389326
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002f71e4(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb8);
  if ((*(uint *)(param_1 + 0xbc) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(param_1 + 0xbc) >> 1)));
  }
          // WARNING: Could not recover jumptable at 0x002f7204. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
