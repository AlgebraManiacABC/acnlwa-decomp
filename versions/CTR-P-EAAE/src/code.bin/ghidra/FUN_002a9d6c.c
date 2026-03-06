/**
 * FUN_002a9d6c.c
 * Source line: 348233
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002a9d6c(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_18 [12];
  
  FUN_001e5894(auStack_18);
  FUN_002bcde0(param_1,param_2,auStack_18);
  *(undefined1 *)(param_1 + 0x6c) = 1;
          // WARNING: Could not recover jumptable at 0x002a9da0. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
