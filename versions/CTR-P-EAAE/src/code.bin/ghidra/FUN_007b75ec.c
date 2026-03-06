/**
 * FUN_007b75ec.c
 * Source line: 1158867
 * Body lines: 8
 */
void FUN_007b75ec(int param_1,int param_2)

{
  int *piVar1;
  
  for (; *(int *)(param_2 + 4) != 0; param_2 = *(int *)(param_2 + 8)) {
    FUN_007b75ec();
  }
  piVar1 = (int *)(param_1 + 0x15774);
  *(int *)(param_2 + 8) = *piVar1;
  *piVar1 = *piVar1 + 1;
  return;
}
