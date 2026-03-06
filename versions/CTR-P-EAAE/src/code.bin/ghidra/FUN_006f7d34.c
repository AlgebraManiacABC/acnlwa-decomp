/**
 * FUN_006f7d34.c
 * Source line: 1052906
 * Body lines: 7
 */
void FUN_006f7d34(float param_1,float param_2,float param_3,int param_4,float *param_5)

{
  *(float *)(param_4 + 8) = *param_5 - param_1 * 0.5;
  *(float *)(param_4 + 0xc) = param_5[1];
  *(float *)(param_4 + 0x10) = param_5[2] - param_2 * 0.5;
  *(float *)(param_4 + 0x14) = *param_5 + param_1 * 0.5;
  *(float *)(param_4 + 0x18) = param_5[1] + param_3;
  *(float *)(param_4 + 0x1c) = param_5[2] + param_2 * 0.5;
  return;
}
