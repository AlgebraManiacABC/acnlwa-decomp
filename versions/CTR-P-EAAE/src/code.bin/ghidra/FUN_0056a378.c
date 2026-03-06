/**
 * FUN_0056a378.c
 * Source line: 811723
 * Body lines: 15
 */
void FUN_0056a378(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar1 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  if (0x34000000 < (int)ABS(fVar1)) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar4 * fVar1;
    param_1[1] = fVar2 * fVar1;
    param_1[2] = fVar3 * fVar1;
  }
  return;
}
