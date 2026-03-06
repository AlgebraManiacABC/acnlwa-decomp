/**
 * FUN_006dcd0c.c
 * Source line: 1037748
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_006dcd0c(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0x997c70) = *(byte *)(param_1 + 0x997c70) & ~(byte)(0x10 << (param_2 & 0xff));
  return;
}
