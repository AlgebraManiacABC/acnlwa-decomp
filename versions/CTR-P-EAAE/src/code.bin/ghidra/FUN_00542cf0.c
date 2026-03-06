/**
 * FUN_00542cf0.c
 * Source line: 786325
 * Body lines: 13
 */
void FUN_00542cf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bf99c();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x16c) != '\0') {
    FUN_00135740(param_1 + 0x150);
    FUN_004c2b3c(param_1 + 4);
    FUN_00137e84(param_1 + 0x150);
    return;
  }
  FUN_004c2b3c(param_1 + 4);
  return;
}
