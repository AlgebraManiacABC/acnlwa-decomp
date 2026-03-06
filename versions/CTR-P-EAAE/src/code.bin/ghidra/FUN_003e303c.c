/**
 * FUN_003e303c.c
 * Source line: 557120
 * Body lines: 8
 */
int FUN_003e303c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(iRam00974a48 + 0x20);
  iVar2 = iVar1 + 0x80;
  if (iVar1 + *(int *)(iVar1 + 0x7c) * 8 + 0x80 == iVar2) {
    iVar2 = 0;
  }
  return iVar2;
}
