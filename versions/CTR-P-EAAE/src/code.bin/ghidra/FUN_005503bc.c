/**
 * FUN_005503bc.c
 * Source line: 794518
 * Body lines: 4
 */
int FUN_005503bc(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x87c) + 0x60764);
  nnnstdMemCpy(param_2,*(int *)(param_1 + 0x87c) + 0x60564,*piVar1 << 2);
  return param_2 + *piVar1 * 4;
}
