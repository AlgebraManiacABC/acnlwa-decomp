/**
 * FUN_002d406c.c
 * Source line: 372514
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002d406c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  FUN_00335634();
  *(undefined4 *)(param_1 + 0x7dc8) = param_4;
  *(undefined4 *)(param_1 + 0x7dcc) = *param_3;
  *(byte *)(param_1 + 0x7dd6) = *(byte *)(param_1 + 0x7dd6) & 0xfd;
  *(byte *)(param_1 + 0x7dd2) = *(byte *)(param_1 + 0x7dd2) | 10;
  *(byte *)(param_1 + 0x7dd3) = *(byte *)(param_1 + 0x7dd3) | 10;
  *(byte *)(param_1 + 0x7dd4) = *(byte *)(param_1 + 0x7dd4) | 10;
  *(byte *)(param_1 + 0x7dd5) = *(byte *)(param_1 + 0x7dd5) | 10;
  return;
}
