/**
 * FUN_00322e58.c
 * Source line: 425511
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00322e58(Item_t *param_1)

{
  Item_t *pIVar1;
  Item_t *pIVar2;
  
  pIVar2 = param_1 + 0x10;
  pIVar1 = param_1 + 0x10;
  for (; param_1 < pIVar2; param_1 = param_1 + 1) {
    Item_Copy(param_1,(Item_t *)&DAT_0095bfdc);
    *(undefined1 *)&pIVar1->raw_item_id = 0;
    pIVar1 = (Item_t *)((int)&pIVar1->raw_item_id + 1);
  }
  return;
}
