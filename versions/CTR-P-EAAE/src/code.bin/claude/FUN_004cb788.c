/**
 * FUN_004cb788.c
 * Source line: 710783
 * Body lines: 8
 */
int FUN_004cb788(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0x10c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
