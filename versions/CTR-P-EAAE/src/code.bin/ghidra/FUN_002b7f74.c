/**
 * FUN_002b7f74.c
 * Source line: 354865
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002b7f74(uint param_1)

{
  if (param_1 < 0x20) {
    *(byte *)((int)&DAT_00952aec + (param_1 >> 3)) =
         *(byte *)((int)&DAT_00952aec + (param_1 >> 3)) | (byte)(1 << (param_1 & 7));
  }
  return;
}
