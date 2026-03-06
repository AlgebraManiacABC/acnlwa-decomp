/**
 * FUN_0012a450.c
 * Source line: 131603
 * Body lines: 13
 */
void FUN_0012a450(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_0012f374();
    if (iVar1 != 0) {
      FUN_0012f474();
      cRam00974ab4 = '\x01';
    }
  }
  else if (cRam00974ab4 != '\0') {
    FUN_0012f518();
    cRam00974ab4 = '\0';
  }
  return;
}
