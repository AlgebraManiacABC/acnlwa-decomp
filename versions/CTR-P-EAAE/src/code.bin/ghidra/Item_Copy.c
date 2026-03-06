/**
 * Item_Copy.c
 * Source line: 394944
 * Body lines: 3
 */
void Item_Copy(Item_t *dst,Item_t *src)

{
  dst->raw_item_id = src->raw_item_id;
  dst->_x2 = src->_x2;
  return;
}
