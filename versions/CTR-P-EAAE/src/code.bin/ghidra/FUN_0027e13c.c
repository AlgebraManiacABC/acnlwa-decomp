/**
 * FUN_0027e13c.c
 * Source line: 326150
 * Body lines: 13
 */
void FUN_0027e13c(void)

{
  int iVar1;
  
  if (DAT_00950148 == 0) {
    return;
  }
  iVar1 = FUN_00695ed8(DAT_00950148,&DAT_0027e1b0);
  if (((iVar1 != 0) && (*(short *)(iVar1 + 0xc) == 0x1c2)) && (*(char *)(iVar1 + 0x2885) != '\0')) {
    FUN_0056d230(iVar1 + 0x2870);
    FUN_0056b5a4();
    FUN_0056c7b0();
    FUN_006f0130(0xe,1);
    return;
  }
  return;
}
