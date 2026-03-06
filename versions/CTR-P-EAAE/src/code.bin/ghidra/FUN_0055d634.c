/**
 * FUN_0055d634.c
 * Source line: 803168
 * Body lines: 10
 */
void FUN_0055d634(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, 1.0 < param_1)) {
    fVar1 = 1.0;
  }
  param_2[3] = param_3[3] + (param_4[3] - param_3[3]) * fVar1;
  *param_2 = *param_3 + (*param_4 - *param_3) * fVar1;
  param_2[1] = param_3[1] + (param_4[1] - param_3[1]) * fVar1;
  param_2[2] = param_3[2] + (param_4[2] - param_3[2]) * fVar1;
  return;
}
