/**
 * FUN_00195488.c
 * Source line: 206812
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_00195488(uint param_1,uint param_2)

{
  uRam0094f860 = param_2 & 0xf | (param_1 & 0xf) << 8 | 0x1000;
  return;
}
