/**
 * FUN_005bd73c.c
 * Source line: 868423
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005bd73c(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | (byte)(1 << (param_2 & 0xff));
  return;
}
