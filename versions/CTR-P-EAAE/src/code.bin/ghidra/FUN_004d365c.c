/**
 * FUN_004d365c.c
 * Source line: 716521
 * Body lines: 7
 */
void FUN_004d365c(int param_1,int param_2)

{
  param_2 += *(int *)(param_1 + 0x16c);
  *(int *)(param_1 + 0x16c) = param_2;
  if (*(int *)(param_1 + 0x170) < param_2) {
    param_2 = *(int *)(param_1 + 0x170);
  }
  *(int *)(param_1 + 0x16c) = param_2;
  return;
}
