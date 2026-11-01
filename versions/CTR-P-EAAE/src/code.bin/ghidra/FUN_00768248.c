ItemSource FUN_00768248(Item_t *param_1)

{
  ItemSource source;
  ItemParam_t *itemParam;
  
  itemParam = Item_GetParam(param_1);
  source = NoSource;
  if ((itemParam != NULL) && (source = itemParam->source, 0xb8 < source)) {
    source = NoSource;
  }
  return source;
}
