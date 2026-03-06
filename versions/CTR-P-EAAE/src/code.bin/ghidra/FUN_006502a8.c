/**
 * FUN_006502a8.c
 * Source line: 961779
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006502a8(int param_1)

{
  if ((*(byte *)(param_1 + 0x17a) & 1) == 0) {
    if (((int)((uint)*(byte *)(param_1 + 0x17a) << 0x1c) < 0) &&
       (FUN_0056ade4(param_1 + 0x2c,(int)*(short *)(param_1 + 0x958),
                     (int)*(short *)(param_1 + 0x95a)),
       *(short *)(param_1 + 0x958) == *(short *)(param_1 + 0x2c))) {
      *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0xf7;
    }
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 1;
  }
  return;
}
