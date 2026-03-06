/**
 * FUN_0010b1b0.c
 * Source line: 109418
 * Body lines: 12
 */
int FUN_0010b1b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00304100();
  if (iVar1 == 2) {
    iVar1 = FUN_003041bc(param_1 + 0x1dd4);
    if (iVar1 == 0) {
      return 3;
    }
    FUN_00126260();
    uRam0094ddec = 0;
    iVar1 = 2;
  }
  return iVar1;
}
