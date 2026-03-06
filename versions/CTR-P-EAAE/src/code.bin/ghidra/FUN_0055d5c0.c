/**
 * FUN_0055d5c0.c
 * Source line: 803154
 * Body lines: 6
 */
float FUN_0055d5c0(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, 1.0 < param_1)) {
    fVar1 = 1.0;
  }
  return *param_2 + (*param_3 - *param_2) * fVar1;
}
