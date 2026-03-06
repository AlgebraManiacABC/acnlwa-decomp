/**
 * FUN_00647514.c
 * Source line: 958000
 * Body lines: 10
 */
#include "../../../include/types.h"

Item_t * FUN_00647514(Item_t *param_1,char *param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  if (*param_2 == '\x18' || *param_2 == '\x1f') {
    IStack_10 = param_4;
    src = (Item_t *)Item_Set(&IStack_10,0x33bd);
    Item_Copy(param_1 + 0x4c,src);
    *(undefined1 *)&param_1[0x4e].raw_item_id = 0;
    param_1 = &IStack_10;
  }
  return param_1;
}
