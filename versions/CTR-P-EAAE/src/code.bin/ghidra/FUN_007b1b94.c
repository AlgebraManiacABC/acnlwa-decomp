/**
 * FUN_007b1b94.c
 * Source line: 1154513
 * Body lines: 12
 */
int FUN_007b1b94(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    iVar2 = FUN_007c513c(param_1);
    iVar3 += 1;
    param_1 = param_1 + iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar3;
}
