/**
 * FUN_0020b4b4.c
 * Source line: 267788
 * Body lines: 7
 */
void FUN_0020b4b4(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, 0x3f800000 < (int)param_1)) {
    fVar1 = 1.0;
  }
  *(float *)(param_2 + 0x1a8) = fVar1;
  return;
}
