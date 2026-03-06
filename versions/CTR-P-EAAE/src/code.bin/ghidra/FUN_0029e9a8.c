/**
 * FUN_0029e9a8.c
 * Source line: 342549
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0029e9a8(byte *param_1)

{
  *param_1 = *param_1 & 0xc3;
  param_1[3] = param_1[3] & 0xe3 | 0x10;
  return;
}
