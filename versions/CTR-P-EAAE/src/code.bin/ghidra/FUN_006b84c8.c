/**
 * FUN_006b84c8.c
 * Source line: 1015039
 * Body lines: 11
 */
void FUN_006b84c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 4;
  FUN_006b5c5c(param_1,param_3 - *(int *)(iVar1 + 0x18));
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (999999999 < param_3) {
    param_3 = 999999999;
  }
  *(int *)(iVar1 + 0x18) = param_3;
  return;
}
