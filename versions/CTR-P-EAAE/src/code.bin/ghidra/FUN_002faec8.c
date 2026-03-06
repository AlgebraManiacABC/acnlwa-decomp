/**
 * FUN_002faec8.c
 * Source line: 393777
 * Body lines: 1
 */
#include "../../../include/types.h"

int FUN_002faec8(int param_1,uint param_2,uint param_3)

{
  return param_1 + (param_3 & 0xf) * 0x40 + (param_2 & 0xf) * 4;
}
