/**
 * FUN_0020d084.c
 * Source line: 269148
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0020d084(int param_1,uint param_2)

{
  Item_t *dst;
  
  FUN_0024e500(param_1 + 18000);
  param_1 += 0x45fc;
  if (3 < param_2) {
    return;
  }
  dst = (Item_t *)(param_1 + param_2 * 4);
  Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst + 4,(Item_t *)&DAT_0095bfdc);
  *(undefined1 *)(param_1 + param_2 + 0x20) = 0;
  FUN_00303cdc(param_1 + param_2 * 8 + 0x24);
  dst[0x11].raw_item_id = 0;
  dst[0x11]._x2 = 0;
  return;
}
