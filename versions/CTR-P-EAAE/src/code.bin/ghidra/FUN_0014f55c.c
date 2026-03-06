/**
 * FUN_0014f55c.c
 * Source line: 163293
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0014f55c(float *param_1,float *param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (param_3 >> 0x18) * 0x10;
  fVar4 = (float)(param_3 & 0xffffff) * 5.9604645e-08;
  fVar2 = *(float *)(&UNK_008c8b0c + iVar1);
  fVar3 = *(float *)(&UNK_008c8b10 + iVar1);
  *param_1 = *(float *)(&UNK_008c8b04 + iVar1) + *(float *)(&UNK_008c8b08 + iVar1) * fVar4;
  *param_2 = fVar2 + fVar3 * fVar4;
  return;
}
