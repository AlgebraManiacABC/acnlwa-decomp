/**
 * FUN_004e0998.c
 * Source line: 725242
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004e0998(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 0x1e) = param_5;
  *(undefined2 *)(param_1 + 0x20) = param_6;
  return;
}
