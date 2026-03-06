/**
 * FUN_004c9c2c.c
 * Source line: 709226
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004c9c2c(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x38) != param_1) {
    *(float *)(param_2 + 0x38) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x10;
  }
  return;
}
