/**
 * FUN_004b9894.c
 * Source line: 696979
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004b9894(int param_1)

{
  FUN_0013451c(*(int *)(param_1 + 0x66c) + (uint)*(byte *)(param_1 + 0x25) * 0x10);
  *(float *)(param_1 + 0x658) = (float)*(byte *)(param_1 + 0x25);
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) + 3;
  return;
}
