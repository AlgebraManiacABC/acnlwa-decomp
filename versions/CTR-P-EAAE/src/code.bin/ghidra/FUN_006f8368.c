/**
 * FUN_006f8368.c
 * Source line: 1053270
 * Body lines: 4
 */
void FUN_006f8368(int param_1,float *param_2)

{
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *param_2;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + param_2[1];
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + param_2[2];
  return;
}
