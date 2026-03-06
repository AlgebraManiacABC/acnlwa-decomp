/**
 * FUN_003e4e48.c
 * Source line: 558468
 * Body lines: 6
 */
int FUN_003e4e48(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 4) + 0x10);
  }
  return iVar1;
}
