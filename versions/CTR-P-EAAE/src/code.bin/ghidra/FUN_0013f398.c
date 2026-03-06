/**
 * FUN_0013f398.c
 * Source line: 151739
 * Body lines: 11
 */
int FUN_0013f398(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}
