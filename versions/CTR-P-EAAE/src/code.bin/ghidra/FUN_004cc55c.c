/**
 * FUN_004cc55c.c
 * Source line: 711533
 * Body lines: 11
 */
void FUN_004cc55c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_004d3a90(piVar1 + -0x6c,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}
