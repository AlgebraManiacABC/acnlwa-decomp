/**
 * FUN_00748164.c
 * Source line: 1104082
 * Body lines: 7
 */
void FUN_00748164(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  param_1[1] = param_2[1] - param_3[1];
  *param_1 = iVar1 - iVar2;
  return;
}
