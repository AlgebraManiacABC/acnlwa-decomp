/**
 * Item_CopyAndReturn.c
 * Source line: 394983
 * Body lines: 3
 */
Item_t * Item_CopyAndReturn(Item_t *dst,Item_t *src)

{
  dst->raw_item_id = src->raw_item_id;
  dst->_x2 = src->_x2;
  return dst;
}
