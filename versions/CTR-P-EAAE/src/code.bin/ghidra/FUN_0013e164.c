/**
 * FUN_0013e164.c
 * Source line: 150475
 * Body lines: 15
 */
int FUN_0013e164(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x20) {
    if (param_1 < 0x18) {
      iVar1 = 0x6c8da500;
    }
    else {
      iVar1 = 0x5109d500;
      param_1 += -0x18;
    }
    param_1 += iVar1;
  }
  else {
    param_1 += -0x20;
  }
  return param_1;
}
