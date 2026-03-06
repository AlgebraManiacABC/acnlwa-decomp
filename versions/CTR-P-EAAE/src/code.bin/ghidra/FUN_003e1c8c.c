/**
 * FUN_003e1c8c.c
 * Source line: 556384
 * Body lines: 11
 */
int FUN_003e1c8c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) &&
      (piVar2 = *(int **)(param_1 + 8), piVar2 < (int *)(*(int *)(iVar1 + 4) + iVar1))) &&
     (piVar2 != NULL)) {
    iVar1 = *piVar2;
    *(int *)(param_1 + 8) = (int)piVar2 + iVar1;
    return (int)piVar2 + iVar1;
  }
  return 0;
}
