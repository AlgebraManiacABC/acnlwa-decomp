/**
 * FUN_002e668c.c
 * Source line: 381497
 * Body lines: 10
 */
void FUN_002e668c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    FUN_0054da5c();
    return;
  }
  return;
}
