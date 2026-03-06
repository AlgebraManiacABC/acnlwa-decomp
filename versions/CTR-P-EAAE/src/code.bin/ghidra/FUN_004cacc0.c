/**
 * FUN_004cacc0.c
 * Source line: 710236
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004cacc0(float param_1,int param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (*(float *)(param_2 + 0x24) != param_1) {
    *(float *)(param_2 + 0x24) = param_1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x40;
  }
  return;
}
