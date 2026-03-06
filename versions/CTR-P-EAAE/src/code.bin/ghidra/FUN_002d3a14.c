/**
 * FUN_002d3a14.c
 * Source line: 372277
 * Body lines: 15
 */
int FUN_002d3a14(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  param_1 += param_2 * 8;
  sVar1 = *(short *)(param_1 + 0xbc4);
  iVar2 = param_1;
  if (sVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xbc0);
  }
  if (sVar1 != 0 && iVar2 != 0) {
    *(short *)(param_1 + 0xbc4) = sVar1 + -1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
