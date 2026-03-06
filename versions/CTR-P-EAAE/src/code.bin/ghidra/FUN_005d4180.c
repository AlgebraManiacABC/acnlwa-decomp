/**
 * FUN_005d4180.c
 * Source line: 883204
 * Body lines: 9
 */
void FUN_005d4180(float param_1,int *param_2)

{
  float fVar1;
  
  if (0.0 < param_1) {
    fVar1 = param_1 * 4096.0 + 0.5;
  }
  else {
    fVar1 = param_1 * 4096.0 - 0.5;
  }
  *param_2 = (int)fVar1;
  return;
}
