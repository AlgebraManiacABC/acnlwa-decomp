/**
 * FUN_00340e30.c
 * Source line: 439944
 * Body lines: 10
 */
void FUN_00340e30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x4980);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x5b60) == '\0') {
      FUN_0081a8c4(param_1 + 0x28,FUN_003402a0,0);
      return;
    }
    FUN_0081a8c4(param_1 + 0x28,FUN_00340200,0);
  }
  return;
}
