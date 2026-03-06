/**
 * FUN_00406c50.c
 * Source line: 573735
 * Body lines: 11
 */
int FUN_00406c50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != param_1 + 0xf4) {
    do {
      if (*(int *)(iVar1 + 0x28) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 0xf4);
  }
  return 0;
}
