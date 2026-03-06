/**
 * FUN_004ce2d0.c
 * Source line: 713158
 * Body lines: 13
 */
void FUN_004ce2d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_001408d4(param_1 + 0x10,param_2 + 0x58);
  iVar2 = param_1 + 8;
  if (iVar2 != *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar1 + -0x18) <= *(int *)(param_2 + 0x40)) break;
      iVar2 = iVar1;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  FUN_0013e7d8(param_1 + 4,iVar2,param_2 + 0x58);
  return;
}
