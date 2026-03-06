/**
 * FUN_001c0810.c
 * Source line: 227646
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001c0810(int param_1,undefined4 param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_001e5894(auStack_18);
  FUN_001d9c9c(param_1,param_2,auStack_18);
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}
