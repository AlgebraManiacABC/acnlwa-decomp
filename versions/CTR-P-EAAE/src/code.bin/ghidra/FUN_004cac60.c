/**
 * FUN_004cac60.c
 * Source line: 710206
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004cac60(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x28) != param_1) {
    *(float *)(param_2 + 0x28) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 4;
  }
  return;
}
