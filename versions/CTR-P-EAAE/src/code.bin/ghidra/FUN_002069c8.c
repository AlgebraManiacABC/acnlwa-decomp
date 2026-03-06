/**
 * FUN_002069c8.c
 * Source line: 265094
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_002069c8(byte *param_1)

{
  *param_1 = *param_1 & 0x80 | 0x53;
  param_1[3] = param_1[3] & 0x7f;
  param_1[4] = param_1[4] & 0xfc | 2;
  return;
}
