/**
 * FUN_002ccc70.c
 * Source line: 367468
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_002ccc70(int param_1,int param_2,undefined4 param_3)

{
  *(byte *)(*(int *)(param_1 + 0x108) + param_2 * 0x518 + 0xd9) = (byte)param_3 ^ 1;
  FUN_002e0428(*(int *)(param_1 + 0x108) + param_2 * 0x518,param_3);
  return;
}
