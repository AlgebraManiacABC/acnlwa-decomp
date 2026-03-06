/**
 * FUN_0031df9c.c
 * Source line: 422596
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0031df9c(int param_1,int *param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f1104(*(int *)(param_1 + 0x1c),param_3);
  }
  *(undefined2 *)(param_2 + 1) = 0x276;
  param_2[0xb] = 0;
  *(undefined1 *)((int)param_2 + 0x31) = 0;
  if (param_2[2] != 0) {
    FUN_004d57d4(*param_2 + 4,param_2 + 2);
    param_2[2] = 0;
  }
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}
