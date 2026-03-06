/**
 * Item_IsID.c
 * Source line: 395138
 * Body lines: 1
 */
#include "../../../include/types.h"

bool Item_IsID(Item_t *item,ItemID item_id)

{
  return (item->raw_item_id & 0xffff7fff) == item_id;
}
