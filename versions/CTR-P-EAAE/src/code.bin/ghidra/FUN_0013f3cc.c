/**
 * FUN_0013f3cc.c
 * Source line: 151758
 * Body lines: 11
 */
int FUN_0013f3cc(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}
