/**
 * FUN_002bf950.c
 * Source line: 359835
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002bf950(Item_t *param_1)

{
  Item_t *pIVar1;
  Item_t *dst;
  
  pIVar1 = param_1 + 0x10;
  for (dst = param_1; dst < param_1 + 0x10; dst = dst + 1) {
    Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
    *(undefined1 *)&pIVar1->raw_item_id = 0;
    pIVar1 = (Item_t *)((int)&pIVar1->raw_item_id + 1);
  }
  FUN_00303534(param_1 + 0xce,0);
  if ((_DAT_00aaf14c != 0) && ((Item_t *)(_DAT_00aaf14c + 0x6bd0) == param_1)) {
    FUN_005c6760();
    return;
  }
  return;
}
