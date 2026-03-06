/**
 * FUN_00572800.c
 * Source line: 817693
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_00572800(int param_1)

{
  if (param_1 != 0) {
    return *(short *)(param_1 + 0xc) == 0xcb;
  }
  return false;
}
