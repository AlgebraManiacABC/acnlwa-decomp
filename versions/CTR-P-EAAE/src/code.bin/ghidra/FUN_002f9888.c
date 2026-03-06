/**
 * FUN_002f9888.c
 * Source line: 391982
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_002f9888(uint param_1,uint param_2)

{
  if (param_1 < 0x3a) {
    param_1 -= 0x30;
  }
  if (0x40 < (param_1 & 0xffffffdf)) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  if (param_2 <= param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}
