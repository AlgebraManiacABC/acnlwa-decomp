/**
 * FUN_007e91bc.c
 * Source line: 1191151
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_007e91bc(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = (Item_t *)Item_Set(&IStack_10,0x7ffe);
  Item_Copy(param_1,src);
  param_1[1].raw_item_id = 0;
  param_1[1]._x2 = 0;
  param_1[2].raw_item_id = 0;
  param_1[2]._x2 = 0;
  *(undefined1 *)&param_1[3].raw_item_id = 200;
  *(byte *)((int)&param_1[3].raw_item_id + 1) = 200;
  *(undefined1 *)&param_1[3]._x2 = 0;
  return;
}
