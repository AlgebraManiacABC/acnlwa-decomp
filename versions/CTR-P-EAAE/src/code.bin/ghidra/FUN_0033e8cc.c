/**
 * FUN_0033e8cc.c
 * Source line: 438802
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0033e8cc(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(&UNK_0083b46c + (uint)*param_1 * 8);
  if ((*(uint *)(&UNK_0083b470 + (uint)*param_1 * 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(&UNK_0083b470 + (uint)*param_1 * 8) >> 1)));
  }
          // WARNING: Could not recover jumptable at 0x0033e8f4. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
