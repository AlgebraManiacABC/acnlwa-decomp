/**
 * FUN_004d2488.c
 * Source line: 715827
 * Body lines: 11
 */
int FUN_004d2488(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0xd0;
  }
  else if (param_2 < 0x20) {
    iVar1 = param_2 * 2 + 0xaefaa8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
