/**
 * FUN_0032939c.c
 * Source line: 429615
 * Body lines: 7
 */
#include "../../../include/types.h"

Item_t * FUN_0032939c(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = (Item_t *)Item_Set(&IStack_10,0x2006);
  Item_Copy((Item_t *)(param_1 + 0x268),src);
  *(undefined1 *)(param_1 + 0x270) = 0;
  return &IStack_10;
}
