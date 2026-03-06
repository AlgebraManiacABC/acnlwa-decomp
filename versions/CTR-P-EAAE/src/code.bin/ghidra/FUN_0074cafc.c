/**
 * FUN_0074cafc.c
 * Source line: 1105425
 * Body lines: 3
 */
float FUN_0074cafc(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * 2.0;
  return *(float *)(param_1 + 0xb4) * fVar1 - fVar1 * 0.5;
}
