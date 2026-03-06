/**
 * FUN_00428fac.c
 * Source line: 592674
 * Body lines: 10
 */
void FUN_00428fac(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 8);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = 0;
    piVar1[1] = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}
