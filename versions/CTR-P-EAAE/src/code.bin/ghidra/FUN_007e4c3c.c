/**
 * FUN_007e4c3c.c
 * Source line: 1188842
 * Body lines: 12
 */
void FUN_007e4c3c(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0xf;
  do {
    cVar2 = *(char *)(param_1 + iVar1) + '\x01';
    *(char *)(param_1 + iVar1) = cVar2;
    if (cVar2 != '\0') {
      return;
    }
    iVar1 += -1;
  } while (0 < iVar1);
  return;
}
