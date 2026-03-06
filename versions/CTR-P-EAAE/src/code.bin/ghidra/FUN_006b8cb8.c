/**
 * FUN_006b8cb8.c
 * Source line: 1015577
 * Body lines: 12
 */
void FUN_006b8cb8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c7408();
  FUN_006b5c5c(param_1,param_2 - *(int *)(param_1 + iVar1 * 4 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (999999999 < param_2) {
    param_2 = 999999999;
  }
  iVar1 = FUN_005c7408();
  *(int *)(param_1 + iVar1 * 4 + 0x18) = param_2;
  return;
}
