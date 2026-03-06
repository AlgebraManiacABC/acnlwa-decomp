/**
 * FUN_00540208.c
 * Source line: 784554
 * Body lines: 15
 */
void FUN_00540208(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)__hardfp_cosf();
  fVar2 = (float)FUN_0077b36c();
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  param_1[3] = fVar1;
  param_1[2] = fVar5 * fVar2;
  *param_1 = fVar3 * fVar2;
  param_1[1] = fVar4 * fVar2;
  return;
}
