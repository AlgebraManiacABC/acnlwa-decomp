/**
 * FUN_002d4198.c
 * Source line: 372564
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002d4198(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x7dd7) == param_2) {
    *(byte *)(param_1 + 0x7dd7) = 4;
  }
  *(undefined1 *)(param_1 + param_2 + 0x7dd2) = 0;
  return;
}
