/**
 * FUN_002c44c0.c
 * Source line: 363936
 * Body lines: 1
 */
#include "../../../include/types.h"

uint FUN_002c44c0(uint param_1,uint param_2,uint param_3)

{
  return param_1 & 1 | (param_2 & 7) << 1 | (param_3 & 0xf) << 4;
}
