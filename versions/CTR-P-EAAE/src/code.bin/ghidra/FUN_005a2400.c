/**
 * FUN_005a2400.c
 * Source line: 850961
 * Body lines: 9
 */
void FUN_005a2400(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 * 0x16 + 0x9b4275) != '\0') {
      FUN_005a180c();
    }
    iVar1 += 1;
  } while (iVar1 < 0x20);
  return;
}
