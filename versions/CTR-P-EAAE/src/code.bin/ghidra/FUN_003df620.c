/**
 * FUN_003df620.c
 * Source line: 554557
 * Body lines: 15
 */
void FUN_003df620(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = iVar1;
  if (iVar1 == param_2) {
    return;
  }
  do {
    if (*(int *)(iVar1 + 8) == *param_3) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 4);
    *param_1 = iVar1;
  } while (iVar1 != param_2);
  return;
}
