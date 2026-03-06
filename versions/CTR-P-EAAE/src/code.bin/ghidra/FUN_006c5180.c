/**
 * FUN_006c5180.c
 * Source line: 1023815
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006c5180(undefined4 *param_1)

{
  Item_t *pIVar1;
  
  *param_1 = 0;
  pIVar1 = Item_CopyAndReturn((Item_t *)(param_1 + 1),(Item_t *)&DAT_0095bfdc);
  pIVar1[1].raw_item_id = 0;
  pIVar1[1]._x2 = 0;
  *(undefined1 *)&pIVar1[2].raw_item_id = 0xff;
  *(byte *)((int)&pIVar1[2].raw_item_id + 1) = 0;
  *(undefined1 *)&pIVar1[2]._x2 = 0;
  *(undefined1 *)((int)&pIVar1[2]._x2 + 1) = 0;
  *(undefined1 *)&pIVar1[3].raw_item_id = 1;
  *(byte *)((int)&pIVar1[3].raw_item_id + 1) = 2;
  *(undefined1 *)&pIVar1[3]._x2 = 3;
  return;
}
