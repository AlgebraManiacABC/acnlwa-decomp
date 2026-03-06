/**
 * FUN_0070eca8.c
 * Source line: 1066123
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0070eca8(uint param_1,uint param_2)

{
  if (0x5e < param_2) {
    param_1 = 3;
  }
  if (param_2 == 0x5e) {
    param_1 = 2;
  }
  else if (param_2 < 0x5e) {
    param_1 = (uint)(byte)(&UNK_0083a985)[param_2 * 0x14];
  }
  return param_1;
}
