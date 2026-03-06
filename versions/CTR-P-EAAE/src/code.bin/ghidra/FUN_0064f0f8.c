/**
 * FUN_0064f0f8.c
 * Source line: 961051
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0064f0f8(int param_1)

{
  if (-1 < *(char *)(param_1 + 0x179)) {
    if ((int)((uint)*(byte *)(param_1 + 0x17a) << 0x1d) < 0) {
      if (*(float *)(param_1 + 0x954) != 0.0) {
        FUN_0056b0c0(*(undefined4 *)(param_1 + 0x950),param_1 + 0x40);
      }
      if (*(float *)(param_1 + 0x950) == *(float *)(param_1 + 0x40)) {
        *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0xfb;
      }
    }
    *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 0x80;
  }
  return;
}
