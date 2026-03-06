/**
 * FUN_006aac18.c
 * Source line: 1006314
 * Body lines: 11
 */
void FUN_006aac18(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)iRam00a21d48;
  while( true ) {
    if (piVar1 == (int *)0xa21d48) {
      return;
    }
    if (piVar1 + -0x42 == (int *)param_1) break;
    piVar1 = (int *)*piVar1;
  }
  FUN_001408d4(0xa21d44,param_1 + 0x108);
  return;
}
