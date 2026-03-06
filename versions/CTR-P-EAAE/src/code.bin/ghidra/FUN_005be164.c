/**
 * FUN_005be164.c
 * Source line: 868699
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005be164(int param_1,uint param_2)

{
  if (param_2 < 5) {
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | (byte)(1 << (param_2 & 0xff));
  }
  return;
}
