/**
 * FUN_001ac668.c
 * Source line: 216290
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001ac668(int param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *(undefined2 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2[1];
  *(undefined4 *)(param_1 + 0x50) = param_2[2];
  *(undefined2 *)(param_1 + 0x30) = param_4;
  *(undefined2 *)(param_1 + 0x32) = param_5;
  return;
}
