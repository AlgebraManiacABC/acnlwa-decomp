/**
 * FUN_005bb2a0.c
 * Source line: 867193
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_005bb2a0(int param_1,uint param_2)

{
  if (param_2 < 8) {
    param_1 = param_1 + (param_2 >> 1) * 0x80 + (param_2 & 1) * 0x40;
  }
  return param_1;
}
