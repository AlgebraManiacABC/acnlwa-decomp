/**
 * Item_GetRawID.c
 * Source line: 409571
 * Body lines: 1
 */
ItemID_2 Item_GetRawID(Item_t *param_1)

{
  return param_1->raw_item_id & 0x7fff;
}
