/**
 * FUN_0053d268.c
 * Source line: 782345
 * Body lines: 9
 */
void FUN_0053d268(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  return;
}
