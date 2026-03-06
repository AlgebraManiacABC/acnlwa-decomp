/**
 * FUN_003d3648.c
 * Source line: 544978
 * Body lines: 11
 */
void FUN_003d3648(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c) + iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}
