/**
 * FUN_0073be3c.c
 * Source line: 1095380
 * Body lines: 6
 */
int FUN_0073be3c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar1 += *(int *)(iVar1 + 0x10);
  }
  return iVar1;
}
