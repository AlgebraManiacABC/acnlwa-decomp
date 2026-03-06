/**
 * FUN_005d58c0.c
 * Source line: 884325
 * Body lines: 7
 */
void FUN_005d58c0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x11cd0) + 0x10) + 5);
  if (iVar1 < 0x20) {
    FUN_00312a4c(DAT_0095debc,param_1 + 0x11d74,"STR_Day",iVar1 + -1);
  }
  FUN_005edca8(param_1,param_1 + 0x11d74);
  return;
}
