/**
 * FUN_006bd4d8.c
 * Source line: 1019317
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006bd4d8(int param_1,uint param_2)

{
  if ((param_2 != 0xffff) && (param_2 < 0x200)) {
    *(byte *)(param_1 + 0xa3e4 + (param_2 >> 3)) =
         *(byte *)(param_1 + 0xa3e4 + (param_2 >> 3)) | (byte)(1 << (param_2 & 7));
  }
  return;
}
