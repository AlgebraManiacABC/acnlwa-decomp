/**
 * FUN_00560b6c.c
 * Source line: 805588
 * Body lines: 12
 */
void FUN_00560b6c(int param_1,int *param_2)

{
  FUN_00560aa8(param_2);
  if (*(int *)(param_1 + 4) == 0) {
    *(int **)(param_1 + 4) = param_2;
    *param_2 = param_1;
  }
  else {
    param_2[2] = *(int *)(param_1 + 4);
    *(int **)(*(int *)(param_1 + 4) + 0xc) = param_2;
    *(int **)(param_1 + 4) = param_2;
    *param_2 = param_1;
  }
  return;
}
