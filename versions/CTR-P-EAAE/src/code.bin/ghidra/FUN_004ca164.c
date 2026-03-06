/**
 * FUN_004ca164.c
 * Source line: 709535
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004ca164(float param_1,int param_2)

{
  if (*(float *)(param_2 + 0x34) != param_1) {
    *(float *)(param_2 + 0x34) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
