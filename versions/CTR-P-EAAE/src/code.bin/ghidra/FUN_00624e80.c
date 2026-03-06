/**
 * FUN_00624e80.c
 * Source line: 938553
 * Body lines: 13
 */
void FUN_00624e80(void)

{
  int iVar1;
  
  iVar1 = FUN_0075dfe8(DAT_0095362c);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = DAT_0095362c + 0x10;
  FUN_00627f74(iVar1);
  if (*(char *)(DAT_0095362c + 0x1329d) != '\x02') {
    FUN_0062801c(iVar1,0x20,4);
    return;
  }
  FUN_0062801c(iVar1,0x22,4);
  return;
}
