/**
 * FUN_0073682c.c
 * Source line: 1091903
 * Body lines: 7
 */
float FUN_0073682c(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    fVar1 = ((*(float *)(param_2 + 0x5c) * (param_1 - *(float *)(param_2 + 0x50))) / param_1) /
            *(float *)(param_2 + 0x4c);
  }
  return fVar1;
}
