/**
 * FUN_005cbe84.c
 * Source line: 879386
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005cbe84(int param_1)

{
  if ((*(byte *)(param_1 + 0x270) & 7) == 1) {
    *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xf8 | 2;
  }
  return;
}
