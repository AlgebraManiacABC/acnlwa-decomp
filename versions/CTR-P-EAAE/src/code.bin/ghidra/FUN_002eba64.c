/**
 * FUN_002eba64.c
 * Source line: 384385
 * Body lines: 9
 */
int FUN_002eba64(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 2) {
    iVar1 = param_3;
  }
  if (iVar1 < 2) {
    param_1 = param_1 + param_3 * 0x800 + param_2 * 0x400;
  }
  return param_1 + 0x22;
}
