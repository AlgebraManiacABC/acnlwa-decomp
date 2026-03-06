/**
 * FUN_0031917c.c
 * Source line: 419553
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_0031917c(int param_1,uint param_2)

{
  if (param_2 < 8) {
    param_1 = param_1 + (param_2 >> 1) * 0x80 + (param_2 & 1) * 0x40;
  }
  return param_1;
}
