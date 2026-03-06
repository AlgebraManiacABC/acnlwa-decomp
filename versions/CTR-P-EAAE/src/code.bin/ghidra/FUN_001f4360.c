/**
 * FUN_001f4360.c
 * Source line: 256197
 * Body lines: 2
 */
#include "../../../include/types.h"

uint FUN_001f4360(uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  return param_1 & 0xff | param_2 << 8 | (param_3 & 0xf) << 0x10 | param_4 << 0x14 | param_5 << 0x14
  ;
}
