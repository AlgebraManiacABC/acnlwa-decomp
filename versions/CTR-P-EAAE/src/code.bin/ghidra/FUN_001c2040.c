/**
 * FUN_001c2040.c
 * Source line: 228869
 * Body lines: 14
 */
int FUN_001c2040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006055f0(param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xd0) + param_2 * 0xa00;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
