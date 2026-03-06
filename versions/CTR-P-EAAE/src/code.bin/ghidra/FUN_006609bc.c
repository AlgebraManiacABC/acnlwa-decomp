/**
 * FUN_006609bc.c
 * Source line: 970585
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006609bc(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0068f114();
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x80;
  }
  return;
}
