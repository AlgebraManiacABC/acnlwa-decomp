/**
 * FUN_002c3c38.c
 * Source line: 363660
 * Body lines: 6
 */
void FUN_002c3c38(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x48) - *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x1c);
  *(float *)(param_2 + 0x40) = SQRT(SQRT(fVar1 * fVar1 + fVar2 * fVar2) * 2.0 * param_1);
  return;
}
