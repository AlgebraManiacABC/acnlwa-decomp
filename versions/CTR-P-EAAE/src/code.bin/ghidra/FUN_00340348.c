/**
 * FUN_00340348.c
 * Source line: 439613
 * Body lines: 14
 */
void FUN_00340348(int param_1)

{
  int iVar1;
  
  FUN_00694918(_DAT_0094f708,10);
  FUN_004b9b64(param_1 + 1000,param_1 + 0x600);
  FUN_005697e0(0,param_1 + 0x600);
  FUN_006a40c8(param_1 + 0x3c98);
  if (*(char *)(param_1 + 0x59b4) != '\0') {
    FUN_0031e810(param_1 + 0x54c8);
  }
  iVar1 = FUN_007234f8(param_1 + 0x4980);
  if (iVar1 == 1) {
    return;
  }
  FUN_002f6d18();
  return;
}
