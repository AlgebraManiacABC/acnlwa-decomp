/**
 * FUN_00748324.c
 * Source line: 1104298
 * Body lines: 15
 */
void FUN_00748324(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  iVar3 = *param_3;
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  iVar1 = param_3[1];
  param_1[1] = param_2[1] - param_3[1];
  *param_1 = iVar5 - iVar3;
  param_1[2] = iVar2 - iVar3;
  param_1[3] = iVar4 - iVar1;
  return;
}
