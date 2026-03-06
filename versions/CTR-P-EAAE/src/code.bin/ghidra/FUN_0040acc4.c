/**
 * FUN_0040acc4.c
 * Source line: 575654
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0040acc4(int param_1,uint param_2,undefined4 param_3)

{
  if (5 < param_2) {
    return;
  }
  *(undefined4 *)(param_1 + param_2 * 400 + 0x24) = param_3;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x984) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x9cc) = 0;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 0x40;
  return;
}
