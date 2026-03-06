/**
 * FUN_006b9df8.c
 * Source line: 1016698
 * Body lines: 7
 */
void FUN_006b9df8(Item_t *param_1)

{
  ItemParam_t *itemParam;
  int iVar1;
  
  itemParam = Item_GetParam(param_1);
  if ((itemParam != NULL) && (iVar1 = FUN_007486dc(itemParam), iVar1 != 0)) {
    param_1->_x2 = param_1->_x2 & ~0xc000;
  }
  return;
}
