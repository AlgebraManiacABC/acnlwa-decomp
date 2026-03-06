/**
 * FUN_006174fc.c
 * Source line: 929367
 * Body lines: 12
 */
void FUN_006174fc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x132a0) != 0) {
    iVar1 = *(int *)(param_1 + 0x132a0) + -1;
    *(int *)(param_1 + 0x132a0) = iVar1;
    if (iVar1 == 0) {
      FUN_0050d478(&DAT_00a22020);
      FUN_00622c5c(param_1 + 0x3594);
      FUN_00623168(param_1 + 0x7880);
      return;
    }
  }
  return;
}
