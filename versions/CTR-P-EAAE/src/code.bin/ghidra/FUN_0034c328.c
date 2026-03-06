/**
 * FUN_0034c328.c
 * Source line: 448767
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0034c328(uint param_1)

{
  if (param_1 < 0x21) {
    param_1 += 0x20;
  }
  else if (param_1 + 0xaef62b00 < 0x28) {
    param_1 += 0xaef62b18;
  }
  else {
    param_1 += 0x93725b00;
    if (0x40 < param_1) {
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}
