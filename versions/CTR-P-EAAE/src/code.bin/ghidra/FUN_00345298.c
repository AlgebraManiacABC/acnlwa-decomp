/**
 * FUN_00345298.c
 * Source line: 442265
 * Body lines: 14
 */
int FUN_00345298(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00135748(0xadfa40);
  iVar1 = 0;
  if (cRam00974aa4 != '\0') {
    iVar1 = FUN_00354584();
    cRam00974aa4 = '\0';
    iVar2 = FUN_003545e4();
    if (iVar2 < 0) {
      iVar1 = iVar2;
    }
  }
  FUN_001357ec(0xadfa40);
  return iVar1;
}
