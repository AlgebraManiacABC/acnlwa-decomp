/**
 * FUN_004290c4.c
 * Source line: 592742
 * Body lines: 8
 */
void FUN_004290c4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_3[1] = (int)param_2;
  *param_3 = iVar1;
  *(int **)(*param_2 + 4) = param_3;
  *param_2 = (int)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}
