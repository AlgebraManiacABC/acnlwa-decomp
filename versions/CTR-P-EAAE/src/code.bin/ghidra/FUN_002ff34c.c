/**
 * FUN_002ff34c.c
 * Source line: 397345
 * Body lines: 12
 */
int FUN_002ff34c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 2) {
    iVar1 = param_3;
  }
  if (iVar1 < 2) {
    iVar1 = param_1 + param_3 * 0x800 + param_2 * 0x400 + 0x22;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
