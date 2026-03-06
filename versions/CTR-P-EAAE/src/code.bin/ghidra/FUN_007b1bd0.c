/**
 * FUN_007b1bd0.c
 * Source line: 1154533
 * Body lines: 8
 */
int FUN_007b1bd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (iVar1 = FUN_007c513c(param_1), iVar1 != 0) {
    iVar2 = iVar2 + iVar1 * 2 + 2;
    param_1 = param_1 + iVar1 * 2 + 2;
  }
  return iVar2 + 2;
}
