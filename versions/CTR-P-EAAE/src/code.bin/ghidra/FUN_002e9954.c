/**
 * FUN_002e9954.c
 * Source line: 383703
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002e9954(uint *param_1)

{
  if (0x2f < *param_1) {
    return;
  }
  FUN_002a4c30(param_1[2]);
  param_1[2] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}
