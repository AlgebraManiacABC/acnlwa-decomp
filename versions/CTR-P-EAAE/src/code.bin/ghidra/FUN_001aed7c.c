/**
 * FUN_001aed7c.c
 * Source line: 217479
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001aed7c(byte *param_1)

{
  *param_1 = *param_1 & 0x80 | 0x6b;
  param_1[3] = param_1[3] & 0x7f;
  param_1[4] = param_1[4] & 0xfc | 2;
  return;
}
