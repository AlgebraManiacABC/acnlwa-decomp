/**
 * FUN_0056b080.c
 * Source line: 812557
 * Body lines: 6
 */
#include "../../../include/types.h"

float FUN_0056b080(float param_1,float param_2,short param_3,short param_4)

{
  ushort uVar1;
  
  uVar1 = param_3 - param_4;
  if ((uVar1 & 0x8000) != 0) {
    uVar1 = ~uVar1 + 1;
  }
  return param_1 + (param_2 - param_1) * (float)(uVar1 ^ 0x7fff) * 3.0517578e-05;
}
