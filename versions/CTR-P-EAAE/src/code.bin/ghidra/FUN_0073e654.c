/**
 * FUN_0073e654.c
 * Source line: 1096922
 * Body lines: 5
 */
float FUN_0073e654(char *param_1)

{
  float fVar1;
  
  if ((*param_1 != '\0') || (fVar1 = 0.0, *(float *)(param_1 + 0x10) != 0.0)) {
    fVar1 = *(float *)(param_1 + 4) * 0.1;
  }
  return fVar1;
}
