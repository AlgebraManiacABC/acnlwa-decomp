/**
 * FUN_0034cf7c.c
 * Source line: 449574
 * Body lines: 1
 */
#include "../../../include/types.h"

uint FUN_0034cf7c(uint param_1,uint param_2)

{
  return param_2 | (param_1 & 0xff0fffff) << 8;
}
