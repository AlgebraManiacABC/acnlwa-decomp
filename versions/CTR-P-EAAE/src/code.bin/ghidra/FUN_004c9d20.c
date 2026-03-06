/**
 * FUN_004c9d20.c
 * Source line: 709296
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004c9d20(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}
