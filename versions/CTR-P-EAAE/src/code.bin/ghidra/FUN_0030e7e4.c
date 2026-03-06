/**
 * FUN_0030e7e4.c
 * Source line: 413012
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_0030e7e4(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1 << (param_2 & 0xff);
  return;
}
