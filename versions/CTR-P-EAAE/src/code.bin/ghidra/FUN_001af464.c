/**
 * FUN_001af464.c
 * Source line: 217631
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001af464(int param_1,int param_2,undefined1 param_3)

{
  if (param_2 < *(int *)(param_1 + 0x9c0) + -2) {
    *(undefined1 *)(*(int *)(param_1 + 0x9fc) + param_2 * 0xe0 + 0xd9) = param_3;
  }
  return;
}
