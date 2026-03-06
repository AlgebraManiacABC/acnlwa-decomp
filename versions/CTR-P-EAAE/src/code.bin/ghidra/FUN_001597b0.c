/**
 * FUN_001597b0.c
 * Source line: 172214
 * Body lines: 9
 */
int FUN_001597b0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*param_1 + 0xc) + iVar1 * 0x10) + param_2 * 0x10 + 0x10;
  }
  return iVar1;
}
