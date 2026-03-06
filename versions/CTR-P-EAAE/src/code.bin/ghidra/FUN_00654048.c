/**
 * FUN_00654048.c
 * Source line: 964006
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00654048(int param_1)

{
  *(byte *)(param_1 + 0x175) = *(byte *)(param_1 + 0x175) & 0xfe;
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_0064f368(param_1);
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0xef;
    *(undefined2 *)(param_1 + 0x95c) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x95e) = 0;
  }
  return;
}
