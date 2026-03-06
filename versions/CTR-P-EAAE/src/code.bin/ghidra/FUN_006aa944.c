/**
 * FUN_006aa944.c
 * Source line: 1006196
 * Body lines: 8
 */
float FUN_006aa944(int param_1)

{
  float fVar1;
  
  if (param_1 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x8c) * 0.00625;
  }
  return fVar1;
}
