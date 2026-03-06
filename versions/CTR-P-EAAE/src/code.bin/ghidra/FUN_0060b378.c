/**
 * FUN_0060b378.c
 * Source line: 923530
 * Body lines: 15
 */
void FUN_0060b378(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3f4);
  if (iVar1 == 0) {
    FUN_00569544(param_1 + 0x3f4);
    FUN_0060af58(param_1);
    return;
  }
  FUN_00569420(param_1 + 0x280,param_1 + 0x3f4);
  uRam009506f3 = 0;
  if (cRam009506f0 == '(') {
    FUN_005e2e04(param_1 + 0x458);
  }
  uRam009506f1 = 0x28;
  FUN_0081b004(param_1 + 0x14,FUN_0060b760,0);
  return;
}
