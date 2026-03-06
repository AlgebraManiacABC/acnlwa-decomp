/**
 * FUN_006bd50c.c
 * Source line: 1019329
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006bd50c(int param_1,uint param_2)

{
  if ((param_2 != 0xffff) && (param_2 < 0x200)) {
    *(byte *)(param_1 + 0xa424 + (param_2 >> 3)) =
         *(byte *)(param_1 + 0xa424 + (param_2 >> 3)) | (byte)(1 << (param_2 & 7));
  }
  return;
}
