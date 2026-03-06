/**
 * Item_IsNullItem.c
 * Source line: 395088
 * Body lines: 1
 */
#include "../../../include/types.h"

bool Item_IsNullItem(Item_t *param_1)

{
  return (param_1->raw_item_id & 0x7fff) == NullItem;
}
