/**
 * FUN_005b4f74.c
 * Source line: 865105
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005b4f74(int param_1,undefined4 *param_2,undefined4 param_3,undefined2 param_4)

{
  *(byte *)(param_1 + 0x24) = BYTE_00957322;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = param_4;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}
