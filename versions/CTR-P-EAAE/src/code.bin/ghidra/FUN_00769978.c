/**
 * FUN_00769978.c
 * Source line: 1127228
 * Body lines: 11
 */
void * FUN_00769978(Item_t *param_1)

{
  int price;
  ItemParam_t *itemParam;
  void *pvVar1;
  
  price = FUN_00305630(param_1);
  itemParam = Item_GetParam(param_1);
  if (((itemParam != NULL) && (itemParam->source < NumSources)) &&
     (itemParam->source == Halloween Hats)) {
    return (void *)((price << 3) / 40);
  }
  pvVar1 = GET_DAT_0095bf74();
  return pvVar1;
}
