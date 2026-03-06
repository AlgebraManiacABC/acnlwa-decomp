/**
 * FUN_0076d1d4.c
 * Source line: 1130440
 * Body lines: 11
 */
int FUN_0076d1d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0076cb70();
  iVar2 = __aeabi_idivmod(iVar1 * 100,0x10a);
  if ((iVar2 < 1) && (0 < iVar1)) {
    iVar2 = 1;
  }
  else if (100 < iVar2) {
    iVar2 = 100;
  }
  return iVar2;
}
