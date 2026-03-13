/**
 * FUN_0073bf6c.c
 * Source line: 1095474
 * Body lines: 6
 */
int FUN_0073bf6c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar1 += *(int *)(iVar1 + 8);
  }
  return iVar1;
}
