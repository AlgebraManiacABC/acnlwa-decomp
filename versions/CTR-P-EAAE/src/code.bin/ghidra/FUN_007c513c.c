/**
 * FUN_007c513c.c
 * Source line: 1170626
 * Body lines: 10
 */
int FUN_007c513c(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 += 1;
    sVar1 = *param_1;
  }
  return iVar2;
}
