/**
 * FUN_0020bea4.c
 * Source line: 268395
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0020bea4(int param_1,uint param_2)

{
  if (param_2 < 6) {
    param_1 += param_2 >> 3;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | (byte)(1 << (param_2 & 7));
  }
  return;
}
