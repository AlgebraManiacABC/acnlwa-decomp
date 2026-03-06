/**
 * FUN_0043df10.c
 * Source line: 604946
 * Body lines: 11
 */
int FUN_0043df10(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
