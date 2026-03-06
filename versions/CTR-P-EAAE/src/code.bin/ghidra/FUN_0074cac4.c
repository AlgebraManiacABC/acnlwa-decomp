/**
 * FUN_0074cac4.c
 * Source line: 1105413
 * Body lines: 4
 */
float FUN_0074cac4(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8) * 2.0 * *(float *)(param_1 + 0xac)
  ;
  return *(float *)(param_1 + 0xb0) * fVar1 + fVar1 * 0.5;
}
