/**
 * FUN_0010b1e4.c
 * Source line: 109438
 * Body lines: 9
 */
void FUN_0010b1e4(Item_t *param_1)

{
  int iVar1;
  
  FUN_0013366c();
  Item_Copy(param_1,(Item_t *)&DAT_0095bfdc);
  iVar1 = 0;
  do {
    Item_Copy(param_1 + iVar1 + 1,(Item_t *)&DAT_0095bfdc);
    iVar1 += 1;
  } while (iVar1 < 2);
  return;
}
