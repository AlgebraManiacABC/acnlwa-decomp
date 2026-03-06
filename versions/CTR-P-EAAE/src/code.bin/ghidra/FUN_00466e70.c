/**
 * FUN_00466e70.c
 * Source line: 633170
 * Body lines: 15
 */
int FUN_00466e70(void)

{
  int iVar1;
  
  if (cRam00974fa0 == '\0') {
    FUN_0012ed00(0);
    FUN_0011d2d4();
    iVar1 = FUN_00467134(1);
    if (-1 < iVar1) {
      cRam00974fa0 = 1;
      return 0;
    }
    thunk_FUN_00135ab0();
  }
  else {
    iVar1 = -0x27df1407;
  }
  return iVar1;
}
