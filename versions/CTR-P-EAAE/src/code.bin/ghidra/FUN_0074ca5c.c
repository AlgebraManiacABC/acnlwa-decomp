/**
 * FUN_0074ca5c.c
 * Source line: 1105390
 * Body lines: 3
 */
float FUN_0074ca5c(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * 2.0;
  return *(float *)(param_1 + 0xb4) * fVar1 + fVar1 * 0.5;
}
