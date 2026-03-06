/**
 * FUN_0073c668.c
 * Source line: 1095749
 * Body lines: 9
 */
void FUN_0073c668(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x18);
  fVar1 = *(float *)(param_2 + 0x1c);
  *param_1 = fVar2 * -0.5;
  param_1[1] = fVar1 * 0.5;
  param_1[2] = fVar2 * 0.5;
  param_1[3] = fVar1 * -0.5;
  return;
}
