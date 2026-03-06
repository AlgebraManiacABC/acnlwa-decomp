/**
 * FUN_00575488.c
 * Source line: 819437
 * Body lines: 12
 */
#include "../../../include/types.h"

Item_t * FUN_00575488(Item_t *param_1)

{
  Item_t *dst;
  
  dst = (Item_t *)Item_Clear(param_1);
  Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
  dst[1].raw_item_id = 0;
  dst[1]._x2 = 0;
  dst[2].raw_item_id = 0;
  dst[2]._x2 = 0;
  dst[3].raw_item_id = 0;
  dst[3]._x2 = 0;
  *(undefined1 *)&dst[4].raw_item_id = 0;
  dst[4]._x2 = 0xffff;
  return dst;
}
