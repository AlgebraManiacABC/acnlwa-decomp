/**
 * FUN_0071077c.c
 * Source line: 1066727
 * Body lines: 13
 */
int FUN_0071077c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = Item_IsNullItem((Item_t *)(param_1 + iVar2 * 4 + 2));
    if (iVar1 == 0) {
      iVar3 += 1;
    }
    iVar2 += 1;
  } while (iVar2 < 0x12);
  return iVar3;
}
