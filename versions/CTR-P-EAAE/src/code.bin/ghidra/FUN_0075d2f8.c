/**
 * FUN_0075d2f8.c
 * Source line: 1117740
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0075d2f8(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)param_3[1];
  fVar4 = *param_1;
  uVar2 = (uint)(param_1[1] * (float)param_3[2] * 182.04445);
  *param_2 = *param_3;
  fVar3 = (float)FUN_0047df24(uVar2 & 0xffff);
  param_2[1] = fVar3 * (fVar1 + fVar4);
  fVar3 = (float)FUN_0047df5c(uVar2 & 0xffff);
  param_2[2] = fVar3 * (fVar1 + fVar4);
  return uVar2 & 0xffff;
}
