/**
 * FUN_0040ad14.c
 * Source line: 575669
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0040ad14(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 4;
  return;
}
