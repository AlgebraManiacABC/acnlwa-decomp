/**
 * FUN_00747094.c
 * Source line: 1103176
 * Body lines: 9
 */
void FUN_00747094(void)

{
  int iVar1;
  
  if ((iRam00974a64 != 0) && (iVar1 = FUN_00733e00(), iVar1 == 1)) {
    if (iRam0097d428 - 0x100000U < 0x3ff00000) {
      FUN_00733680(iRam0097d428,0x3ff00000);
      return;
    }
    return;
  }
  return;
}
