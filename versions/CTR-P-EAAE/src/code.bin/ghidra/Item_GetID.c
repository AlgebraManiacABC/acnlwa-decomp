/**
 * Item_GetID.c
 * Source line: 1126593
 * Body lines: 10
 */
ItemID Item_GetID(Item_t *item)

{
  ItemID tmp;
  ItemID item_id;
  
  tmp = item->raw_item_id & ~0x00008000;
  if (tmp + -MIN_ITEM_ID < NUM_ITEMS) {
    item_id = tmp + -MIN_ITEM_ID;
  }
  else {
    item_id = 0xffffffff;
  }
  return item_id;
}
