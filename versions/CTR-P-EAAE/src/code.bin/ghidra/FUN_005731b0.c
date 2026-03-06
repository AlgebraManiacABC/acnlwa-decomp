/**
 * FUN_005731b0.c
 * Source line: 818056
 * Body lines: 8
 */
int FUN_005731b0(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(short *)(param_1 + 0xc) != 200)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 0x7a3);
  }
  return iVar1;
}
