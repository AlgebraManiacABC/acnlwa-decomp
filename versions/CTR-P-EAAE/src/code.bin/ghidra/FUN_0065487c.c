/**
 * FUN_0065487c.c
 * Source line: 964391
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0065487c(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0068ec98();
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x80;
  }
  return;
}
