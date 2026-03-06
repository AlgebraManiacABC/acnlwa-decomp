/**
 * FUN_00628000.c
 * Source line: 941376
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00628000(int param_1,uint param_2)

{
  if (param_2 < 4) {
    param_1 += param_2 * 4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}
