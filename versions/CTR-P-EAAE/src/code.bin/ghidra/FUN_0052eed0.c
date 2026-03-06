/**
 * FUN_0052eed0.c
 * Source line: 773365
 * Body lines: 7
 */
void FUN_0052eed0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = *param_3;
  param_1[1] = param_3[1] + param_2[1] * 0x10;
  *param_1 = iVar1 + iVar2 * 0x10;
  return;
}
