/**
 * FUN_007699fc.c
 * Source line: 1127247
 * Body lines: 10
 */
void * FUN_007699fc(Item_t *param_1)

{
  void *price;
  ItemParam_t *itemParam;
  
  price = (void *)FUN_00305630(param_1);
  itemParam = Item_GetParam(param_1);
  if (((itemParam != NULL) && (itemParam->source < NumSources)) &&
     (itemParam->source == Halloween Hats)) {
    return price;
  }
  price = GET_DAT_0095bf74();
  return price;
}
