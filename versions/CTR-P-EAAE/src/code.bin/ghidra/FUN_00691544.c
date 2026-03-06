/**
 * FUN_00691544.c
 * Source line: 996608
 * Body lines: 11
 */
#include "../../../include/types.h"

Item_t * FUN_00691544(Item_t *param_1,Item_t *param_2,undefined1 param_3,Item_t param_4,
                     undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  Item_t IStack_20;
  
  IStack_20 = param_4;
  Item_CopyAndReturn(&IStack_20,param_2);
  FUN_006b9df8(&IStack_20);
  Item_Copy(param_1,&IStack_20);
  *(undefined1 *)&param_1[1].raw_item_id = param_3;
  *(undefined1 *)&param_1[1]._x2 = param_5;
  *(byte *)((int)&param_1[1].raw_item_id + 1) = (byte)param_4.raw_item_id;
  *(undefined1 *)((int)&param_1[1]._x2 + 1) = param_6;
  *(undefined1 *)&param_1[2].raw_item_id = param_7;
  return &IStack_20;
}
