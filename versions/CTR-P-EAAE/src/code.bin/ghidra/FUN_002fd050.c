/**
 * FUN_002fd050.c
 * Source line: 395529
 * Body lines: 2
 */
void FUN_002fd050(Item_t *param_1,ItemID_2 raw_id)

{
  param_1->raw_item_id = param_1->raw_item_id & 0x8000 | raw_id & ~0x8000;
  return;
}
