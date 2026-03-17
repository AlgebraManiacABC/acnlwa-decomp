/**
 * FUN_002f7d68.c
 * Source line: 390165
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_002f7d68(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 &= 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}
