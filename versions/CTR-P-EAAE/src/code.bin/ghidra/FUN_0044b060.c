/**
 * FUN_0044b060.c
 * Source line: 612078
 * Body lines: 14
 */
void FUN_0044b060(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == param_1 + 0xd0) {
    return;
  }
  while ((*(int *)(iVar1 + 8) != *param_2 || (*(int *)(iVar1 + 0xc) != param_2[1]))) {
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == param_1 + 0xd0) {
      return;
    }
  }
  FUN_00429168(param_1 + 0xcc,iVar1);
  FUN_00429000(param_1 + 0xdc,param_1 + 0xe0,*(int *)(param_1 + 0xec) + iVar1);
  return;
}
