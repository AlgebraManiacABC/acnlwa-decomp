/**
 * FUN_00754100.c
 * Source line: 1109790
 * Body lines: 8
 */
void FUN_00754100(int param_1,int param_2)

{
  int iVar1;
  
  param_1 += param_2 * 0x48;
  iVar1 = FUN_00754978(param_1 + 8);
  if (iVar1 != 0) {
    FUN_00754988(param_1 + 8);
    return;
  }
  return;
}
