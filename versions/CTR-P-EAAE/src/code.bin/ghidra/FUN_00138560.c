/**
 * FUN_00138560.c
 * Source line: 144901
 * Body lines: 9
 */
void FUN_00138560(int *param_1,int *param_2)

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
