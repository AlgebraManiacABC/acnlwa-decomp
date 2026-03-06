/**
 * FUN_0014f4d0.c
 * Source line: 163225
 * Body lines: 12
 */
void FUN_0014f4d0(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  *param_2 = *param_4 + *param_3 * param_1;
  param_2[1] = fVar3 + fVar1 * param_1;
  param_2[2] = fVar4 + fVar2 * param_1;
  return;
}
