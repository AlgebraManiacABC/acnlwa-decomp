/**
 * FUN_0077a6ec.c
 * Source line: 1137013
 * Body lines: 15
 */
#include "../../../include/types.h"

float FUN_0077a6ec(uint param_1,uint param_2)

{
  float fVar1;
  
  if (((-1 < (int)(0x7f800000 - (param_1 & 0x7fffffff))) &&
      (-1 < (int)(0x7f800000 - (param_2 & 0x7fffffff)))) &&
     (((param_1 & 0x7fffffff) == 0x7f800000 || ((param_2 & 0x7fffffff) == 0)))) {
    __set_errno(1);
    return -NAN;
  }
  fVar1 = (float)FUN_008384e8(param_1,param_2);
  if ((~((uint)fVar1 >> 0x17) & 0xff) == 0) {
    return fVar1;
  }
  if ((param_1 & 0x80000000) != ((uint)fVar1 & 0x80000000)) {
    return fVar1 - (float)((uint)fVar1 & 0x80000000 | param_2 & 0x7fffffff);
  }
  return fVar1;
}
