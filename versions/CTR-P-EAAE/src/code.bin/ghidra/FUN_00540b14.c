/**
 * FUN_00540b14.c
 * Source line: 785011
 * Body lines: 14
 */
void FUN_00540b14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0 || param_3 < 0) {
    return;
  }
  iVar2 = *param_1;
  iVar1 = param_2 + param_3;
  if (iVar1 <= iVar2) {
    if (iVar1 < iVar2) {
      FUN_001348cc(param_1[2] + param_2 * 4,param_1[2] + iVar1 * 4,(iVar2 - iVar1) * 4);
    }
    *param_1 = *param_1 - param_3;
  }
  return;
}
