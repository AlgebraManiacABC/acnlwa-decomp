/**
 * FUN_0066fb64.c
 * Source line: 978199
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0066fb64(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0068eff0();
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x80;
  }
  return;
}
