/**
 * FUN_0073444c.c
 * Source line: 1089963
 * Body lines: 11
 */
int FUN_0073444c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if (*(int *)(iVar1 + 0x14) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
