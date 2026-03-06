/**
 * FUN_00765d54.c
 * Source line: 1124225
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00765d54(float *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  float local_20 [4];
  
  uVar1 = FUN_00765564(param_2);
  local_20[0] = 76.0;
  local_20[1] = 59.0;
  local_20[2] = 42.5;
  local_20[3] = 26.0;
  FUN_00764660(param_1,param_2);
  fVar2 = local_20[uVar1 & 3];
  *param_1 = *param_1 + fVar2;
  param_1[2] = param_1[2] + fVar2;
  fVar2 = (float)FUN_006c5c60(param_1,0);
  param_1[1] = fVar2;
  return;
}
