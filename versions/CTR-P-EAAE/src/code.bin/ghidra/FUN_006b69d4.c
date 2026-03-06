/**
 * FUN_006b69d4.c
 * Source line: 1013189
 * Body lines: 12
 */
void FUN_006b69d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00305f2c();
  if (iVar1 != 3) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (99 < param_2) {
      param_2 = 99;
    }
    *(int *)(param_1 + 0x118) = param_2;
  }
  return;
}
