/**
 * FUN_0056afe8.c
 * Source line: 812492
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0056afe8(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2;
  if (param_2 < param_3) {
    fVar1 = param_3;
    param_3 = param_2;
  }
  if ((param_3 <= param_1) && (param_1 <= fVar1)) {
    return 1;
  }
  return 0;
}
