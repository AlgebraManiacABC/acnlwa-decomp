/**
 * FUN_001126fc.c
 * Source line: 113416
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_001126fc(int param_1,uint param_2)

{
  if (param_2 < 0x10) {
    return param_2 * 0xf2 + param_1 + 0x8ee;
  }
  return 0;
}
