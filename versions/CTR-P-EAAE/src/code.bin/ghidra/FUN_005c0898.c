/**
 * FUN_005c0898.c
 * Source line: 870050
 * Body lines: 10
 */
void FUN_005c0898(Item_t *param_1)

{
  int iVar1;
  Item_t *src;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    src = (Item_t *)FUN_00765e04();
    Item_CopyAndReturn(param_1,src);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
