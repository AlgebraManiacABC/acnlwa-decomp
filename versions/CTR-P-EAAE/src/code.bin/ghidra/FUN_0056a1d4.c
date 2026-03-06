/**
 * FUN_0056a1d4.c
 * Source line: 811629
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0056a1d4(int param_1,undefined2 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_0047df24(param_2);
  fVar2 = (float)FUN_0047df5c(param_2);
  fVar3 = *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar1 * fVar3 - fVar2 * *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar2 * fVar3 + fVar1 * *(float *)(param_1 + 8);
  return;
}
