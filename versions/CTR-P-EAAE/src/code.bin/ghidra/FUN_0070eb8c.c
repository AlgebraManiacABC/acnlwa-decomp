/**
 * FUN_0070eb8c.c
 * Source line: 1066046
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0070eb8c(uint param_1,uint param_2)

{
  if (0x5e < param_2) {
    param_1 = 0x20;
  }
  if (param_2 == 0x5e) {
    param_1 = 0x10;
  }
  else if (param_2 < 0x5e) {
    param_1 = (uint)(byte)(&UNK_0083a990)[param_2 * 0x14];
  }
  return param_1;
}
