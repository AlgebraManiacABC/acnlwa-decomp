/**
 * FUN_0074fe88.c
 * Source line: 1106602
 * Body lines: 8
 */
void FUN_0074fe88(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = *param_3 * param_1;
  param_2[1] = fVar1 * param_1;
  param_2[2] = fVar2 * param_1;
  return;
}
