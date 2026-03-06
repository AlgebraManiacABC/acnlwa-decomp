/**
 * FUN_00734228.c
 * Source line: 1089807
 * Body lines: 11
 */
int FUN_00734228(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = 0;
  if (iVar2 != param_1 + 8) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 += 1;
    } while (iVar2 != param_1 + 8);
  }
  return iVar1;
}
