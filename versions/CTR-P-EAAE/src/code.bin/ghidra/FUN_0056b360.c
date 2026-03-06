/**
 * FUN_0056b360.c
 * Source line: 812753
 * Body lines: 7
 */
void FUN_0056b360(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  param_1 = *param_3 * param_1;
  if ((param_1 <= param_2) && (fVar1 = -param_2, param_2 = param_1, param_1 < fVar1)) {
    param_2 = fVar1;
  }
  *param_3 = *param_3 - param_2;
  return;
}
