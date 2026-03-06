/**
 * FUN_0060b6f0.c
 * Source line: 923648
 * Body lines: 12
 */
void FUN_0060b6f0(int param_1)

{
  int iVar1;
  
  FUN_0060af58();
  if (cRam009506f0 != '(') {
    if (cRam009506f0 != cRam009506f1) goto LAB_0060b744;
    cRam009506f0 = '(';
  }
  if ((cRam009506f2 == '\0') && (iVar1 = FUN_0060b230(cRam009506f1), iVar1 == 0)) {
    return;
  }
LAB_0060b744:
  FUN_0081b004(param_1 + 0x14,FUN_0060b378,0);
  return;
}
