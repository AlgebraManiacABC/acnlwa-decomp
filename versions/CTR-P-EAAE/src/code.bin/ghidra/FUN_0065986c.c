/**
 * FUN_0065986c.c
 * Source line: 967235
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0065986c(int param_1)

{
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     (-1 < (int)((uint)*(byte *)(param_1 + 0x177) << 0x19))) {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 0x40;
    FUN_0058c19c();
    FUN_0058a250();
    return;
  }
  return;
}
