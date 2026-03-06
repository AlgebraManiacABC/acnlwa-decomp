/**
 * FUN_0074ca8c.c
 * Source line: 1105401
 * Body lines: 4
 */
float FUN_0074ca8c(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * 2.0 * *(float *)(param_1 + 0xac)
  ;
  return *(float *)(param_1 + 0xb0) * fVar1 - fVar1 * 0.5;
}
