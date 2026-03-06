/**
 * FUN_007527dc.c
 * Source line: 1108762
 * Body lines: 9
 */
#include "../../../include/types.h"

float FUN_007527dc(int param_1,float *param_2)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined2 *)(param_1 + 0x3a);
  fVar2 = (float)FUN_0047df24(uVar1);
  fVar4 = param_2[2];
  fVar3 = (float)FUN_0047df5c(uVar1);
  return fVar2 * fVar4 + *param_2 * fVar3;
}
