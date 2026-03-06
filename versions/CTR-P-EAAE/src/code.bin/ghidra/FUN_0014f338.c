/**
 * FUN_0014f338.c
 * Source line: 163084
 * Body lines: 13
 */
void FUN_0014f338(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  if (fVar1 <= 0.0) {
    return;
  }
  fVar1 = 1.0 / fVar1;
  *param_1 = fVar2 * fVar1;
  param_1[1] = fVar3 * fVar1;
  return;
}
