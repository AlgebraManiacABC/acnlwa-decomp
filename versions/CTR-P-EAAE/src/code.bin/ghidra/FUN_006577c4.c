/**
 * FUN_006577c4.c
 * Source line: 965962
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006577c4(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0068ef60();
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x80;
  }
  return;
}
