/**
 * FUN_006577f4.c
 * Source line: 965974
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006577f4(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0068ef84();
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x80;
  }
  return;
}
