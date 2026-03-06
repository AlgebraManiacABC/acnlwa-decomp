/**
 * FUN_00583be8.c
 * Source line: 829974
 * Body lines: 9
 */
int FUN_00583be8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0094d080 != 0) {
    iVar1 = *(int *)(DAT_0094d080 + 0xb18);
  }
  if (DAT_0094d080 != 0 && iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}
