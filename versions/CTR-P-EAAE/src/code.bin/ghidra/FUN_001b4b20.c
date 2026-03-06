/**
 * FUN_001b4b20.c
 * Source line: 221208
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001b4b20(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x16) = *param_2;
  *(undefined4 *)(param_1 + 0x1a) = param_2[1];
  *(undefined4 *)(param_1 + 0x1e) = param_2[2];
  *(undefined4 *)(param_1 + 0x22) = param_2[3];
  *(undefined4 *)(param_1 + 0x26) = param_2[4];
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 5);
  local_10 = param_4;
  FUN_0035072c(&local_10);
  *(char *)(param_1 + 0x2c) = (char)((uint)local_10 >> 0x18);
  *(char *)(param_1 + 0x2d) = (char)((uint)local_10 >> 0x10);
  return;
}
