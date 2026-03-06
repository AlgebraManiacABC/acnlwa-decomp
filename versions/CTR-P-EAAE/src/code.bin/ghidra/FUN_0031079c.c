/**
 * FUN_0031079c.c
 * Source line: 414233
 * Body lines: 7
 */
void FUN_0031079c(Item_t *param_1)

{
  ItemParam_t *itemParam;
  
  itemParam = Item_GetParam(param_1);
  if (itemParam != NULL) {
    FUN_007485d0(itemParam);
    return;
  }
  return;
}
