/**
 * FUN_0032a470.c
 * Source line: 430297
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0032a470(undefined1 *param_1)

{
  Item_t *pIVar1;
  
  *param_1 = 0x22;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  pIVar1 = Item_CopyAndReturn((Item_t *)(param_1 + 0xc),(Item_t *)&DAT_0095bfdc);
  *(undefined1 *)&pIVar1[1].raw_item_id = 0;
  *(byte *)((int)&pIVar1[1].raw_item_id + 1) = 200;
  *(undefined1 *)&pIVar1[1]._x2 = 200;
  *(undefined1 *)((int)&pIVar1[1]._x2 + 1) = 0;
  return;
}
