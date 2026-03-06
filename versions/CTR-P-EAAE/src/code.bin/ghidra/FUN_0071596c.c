/**
 * FUN_0071596c.c
 * Source line: 1069786
 * Body lines: 15
 */
int FUN_0071596c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  while( true ) {
    piVar2 = (int *)(param_1 + iVar1 * 8);
    if (piVar2[1] == 0 && *piVar2 == 0) {
      return iVar1;
    }
    if (piVar2[2] == 0 && piVar2[3] == 0) break;
    iVar1 += 2;
    if (99 < iVar1) {
      return iVar1;
    }
  }
  return iVar1 + 1;
}
