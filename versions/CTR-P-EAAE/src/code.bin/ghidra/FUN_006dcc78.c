/**
 * FUN_006dcc78.c
 * Source line: 1037707
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_006dcc78(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0x997c70) = *(byte *)(param_1 + 0x997c70) | (byte)(0x10 << (param_2 & 0xff));
  return;
}
