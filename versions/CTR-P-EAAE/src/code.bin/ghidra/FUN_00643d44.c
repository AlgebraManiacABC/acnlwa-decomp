/**
 * FUN_00643d44.c
 * Source line: 956661
 * Body lines: 13
 */
int FUN_00643d44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1030);
  while (((iVar2 == iVar3 || (iVar1 = FUN_002fe450(iVar2), iVar1 == 0)) ||
         (iVar1 = FUN_003099d0(), iVar1 != iVar3))) {
    iVar2 += 1;
    if (9 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}
