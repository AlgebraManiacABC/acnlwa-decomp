/**
 * FUN_005b49b4.c
 * Source line: 864915
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_005b49b4(uint param_1)

{
  if ((param_1 == 0xa5) || ((~*(uint *)(&UNK_00889074 + param_1 * 4) & 0x100000) != 0)) {
    param_1 = 0;
  }
  else {
    param_1 &= 1;
  }
  return param_1;
}
