/**
 * FUN_00556050.c
 * Source line: 798229
 * Body lines: 4
 */
int FUN_00556050(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x87c) + 0x60764);
  nnnstdMemCpy(param_2,*(int *)(param_1 + 0x87c) + 0x60564,*piVar1 << 2);
  return param_2 + *piVar1 * 4;
}
