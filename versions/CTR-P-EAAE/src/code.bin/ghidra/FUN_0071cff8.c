/**
 * FUN_0071cff8.c
 * Source line: 1074793
 * Body lines: 9
 */
void FUN_0071cff8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1 * *param_3 + param_1[2] * param_3[2] + param_1[3];
  fVar1 = *param_1 * *param_2 + param_1[2] * param_2[2] + param_1[3];
  if (((fVar2 <= 0.0) || (0.0 <= fVar1)) && ((0.0 <= fVar2 || (fVar1 <= 0.0)))) {
    return;
  }
  FUN_0014f4d0(-fVar1,param_2,param_1);
  return;
}
