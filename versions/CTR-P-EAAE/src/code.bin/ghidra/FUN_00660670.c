/**
 * FUN_00660670.c
 * Source line: 970424
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00660670(float param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 local_8;
  
  fVar1 = 0.0;
  if (3.104 < param_1) {
    fVar1 = (param_1 - 3.104) / 2.1340003;
  }
  local_8 = (int)(fVar1 * 1792.0) & 0xffff;
  FUN_006540d8(param_2,local_8,0xf0);
  return;
}
