/**
 * FUN_001c058c.c
 * Source line: 227482
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001c058c(int param_1,undefined4 param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_001e5894(auStack_18);
  FUN_0020a4cc(param_1,param_2,auStack_18);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}
