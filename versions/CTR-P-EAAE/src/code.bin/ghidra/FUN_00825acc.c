/**
 * FUN_00825acc.c
 * Source line: 1235071
 * Body lines: 12
 */
void FUN_00825acc(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    FUN_00578018(*param_1,param_1);
  }
  if (param_2 == 0) {
    return;
  }
  if (param_1 != NULL) {
    param_1[1] = *(int *)(param_2 + 0x70);
    *(int **)(param_2 + 0x70) = param_1;
    *param_1 = *(int *)(param_2 + 0x74);
  }
  return;
}
