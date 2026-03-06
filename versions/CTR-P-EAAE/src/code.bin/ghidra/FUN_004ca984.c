/**
 * FUN_004ca984.c
 * Source line: 710036
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004ca984(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x30) != param_1) {
    *(float *)(param_2 + 0x30) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
