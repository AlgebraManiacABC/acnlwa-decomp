/**
 * FUN_00175d8c.c
 * Source line: 190668
 * Body lines: 6
 */
void FUN_00175d8c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(char *)(param_1 + iVar1) != 0 && *(char *)(param_1 + iVar1) != param_2) {
    iVar1 += 1;
  }
  return;
}
