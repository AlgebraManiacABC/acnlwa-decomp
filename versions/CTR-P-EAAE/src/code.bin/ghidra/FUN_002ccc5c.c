/**
 * FUN_002ccc5c.c
 * Source line: 367458
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_002ccc5c(int param_1,undefined4 param_2)

{
  *(byte *)(*(int *)(param_1 + 0x560) + 0x5f1) = (byte)param_2 ^ 1;
  FUN_002e0428(*(int *)(param_1 + 0x560) + 0x518,param_2);
  return;
}
