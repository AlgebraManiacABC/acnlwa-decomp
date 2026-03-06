/**
 * FUN_0070eb60.c
 * Source line: 1066029
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0070eb60(uint param_1,uint param_2)

{
  if (0x5e < param_2) {
    param_1 = 0x28;
  }
  if (param_2 == 0x5e) {
    param_1 = 0x24;
  }
  else if (param_2 < 0x5e) {
    param_1 = (uint)(byte)(&UNK_0083a991)[param_2 * 0x14];
  }
  return param_1;
}
