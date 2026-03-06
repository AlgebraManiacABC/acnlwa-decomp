/**
 * FUN_0034cd5c.c
 * Source line: 449481
 * Body lines: 15
 */
int FUN_0034cd5c(void)

{
  int iVar1;
  
  FUN_0034ee0c();
  iVar1 = 0;
  if ((cRam00974b94 == '\0') && (iVar1 = FUN_0034f18c(), -1 < iVar1)) {
    FUN_0034f150();
    iVar1 = FUN_0011fb18();
    if (-1 < iVar1) {
      uRam00974b95 = 1;
      FUN_0011d2d4();
      uRam00974b98 = FUN_0011ddb0();
      thunk_FUN_00135ab0();
      cRam00974b94 = '\x01';
    }
  }
  return iVar1;
}
