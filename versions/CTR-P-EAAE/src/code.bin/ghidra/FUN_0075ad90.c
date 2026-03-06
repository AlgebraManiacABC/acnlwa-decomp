/**
 * FUN_0075ad90.c
 * Source line: 1115949
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0075ad90(int param_1)

{
  undefined4 local_10;
  undefined4 local_c [2];
  
  local_10 = *(undefined4 *)(param_1 + 0x14);
  local_c[0] = *(undefined4 *)(*(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x1c) + -1) * 4);
  FUN_005ea0a8(*(undefined4 *)(param_1 + 0xb8),&local_10,local_c);
  return;
}
