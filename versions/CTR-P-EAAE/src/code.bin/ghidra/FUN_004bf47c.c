/**
 * FUN_004bf47c.c
 * Source line: 701438
 * Body lines: 13
 */
void FUN_004bf47c(int param_1,int param_2)

{
  float fVar1;
  
  FUN_0012e804();
  *(int *)(param_1 + 0x14) = param_2;
  fVar1 = *(float *)(param_1 + 4);
  if (*(float **)(param_1 + 0x18) != NULL) {
    FUN_004bf4bc(fVar1 * **(float **)(param_1 + 0x18));
    return;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x3c) = fVar1;
  return;
}
