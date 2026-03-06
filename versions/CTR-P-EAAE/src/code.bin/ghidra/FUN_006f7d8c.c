/**
 * FUN_006f7d8c.c
 * Source line: 1052920
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006f7d8c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = *param_3;
  *(undefined4 *)(param_1 + 0x18) = param_3[1];
  *(undefined4 *)(param_1 + 0x1c) = param_3[2];
  return;
}
