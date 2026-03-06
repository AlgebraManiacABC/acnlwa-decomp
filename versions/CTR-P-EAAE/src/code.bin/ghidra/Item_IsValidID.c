/**
 * Item_IsValidID.c
 * Source line: 395096
 * Body lines: 1
 */
#include "../../../include/types.h"

uint Item_IsValidID(Item_t *item)

{
  return (uint)((item->raw_item_id & ~0x00008000) - 0x2000 < NUM_ITEMS);
}
