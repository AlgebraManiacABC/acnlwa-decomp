/**
 * FUN_001c2074.c
 * Source line: 228891
 * Body lines: 14
 */
int FUN_001c2074(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00605600(param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1bc);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x1bc) + param_2 * 0xa00 + -0xa5a00;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
