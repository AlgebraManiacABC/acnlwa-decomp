/**
 * FUN_005be180.c
 * Source line: 868710
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005be180(int param_1,uint param_2)

{
  if (param_2 < 6) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | (byte)(1 << (param_2 & 0xff));
  }
  return;
}
