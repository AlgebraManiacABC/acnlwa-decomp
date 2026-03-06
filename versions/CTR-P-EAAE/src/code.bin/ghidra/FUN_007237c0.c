/**
 * FUN_007237c0.c
 * Source line: 1078340
 * Body lines: 6
 */
int FUN_007237c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 0xb4) + 0xd7);
  }
  return iVar1;
}
