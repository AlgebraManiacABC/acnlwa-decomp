/**
 * FUN_002c2d58.c
 * Source line: 362962
 * Body lines: 6
 */
void FUN_002c2d58(int param_1,int *param_2)

{
  if (param_2 != NULL) {
    param_2[1] = *(int *)(param_1 + 0x1b0);
    *(int **)(param_1 + 0x1b0) = param_2;
    *param_2 = param_1;
  }
  return;
}
