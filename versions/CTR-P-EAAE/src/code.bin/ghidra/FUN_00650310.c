/**
 * FUN_00650310.c
 * Source line: 961796
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00650310(int param_1)

{
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x17a) << 0x1e)) {
    if (((int)((uint)*(byte *)(param_1 + 0x17a) << 0x1b) < 0) &&
       (FUN_0056ade4(param_1 + 0x2e,(int)*(short *)(param_1 + 0x95c),
                     (int)*(short *)(param_1 + 0x95e)),
       *(short *)(param_1 + 0x95c) == *(short *)(param_1 + 0x2e))) {
      *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0xef;
    }
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 2;
  }
  return;
}
