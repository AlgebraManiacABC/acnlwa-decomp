/**
 * FUN_0071eb60.c
 * Source line: 1076260
 * Body lines: 13
 */
float FUN_0071eb60(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x14);
  fVar2 = *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x1c);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  if (param_2 * param_2 < fVar1) {
    fVar1 = param_1 * SQRT(fVar1 / (param_2 * param_2));
    param_1 = 3.0;
    if (fVar1 <= 3.0) {
      param_1 = fVar1;
    }
  }
  return param_1;
}
