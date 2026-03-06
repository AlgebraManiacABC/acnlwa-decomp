/**
 * FUN_00609e58.c
 * Source line: 922885
 * Body lines: 7
 */
void FUN_00609e58(int param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_00125f8c();
    DAT_009506cc = 0xffffffff;
    DAT_009506c1 = 0;
    FUN_0081c0a0(param_1);
  }
  return;
}
