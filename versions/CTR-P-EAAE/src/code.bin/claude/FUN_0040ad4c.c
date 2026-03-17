/**
 * FUN_0040ad4c.c
 * Source line: 575689
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0040ad4c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 0x20;
  return;
}
