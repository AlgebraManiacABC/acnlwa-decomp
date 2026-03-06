/**
 * FUN_002a79e4.c
 * Source line: 346836
 * Body lines: 6
 */
#include "../../../include/types.h"

Item_t * FUN_002a79e4(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = (Item_t *)Item_Set(&IStack_10,0x2873);
  Item_Copy(param_1,src);
  return &IStack_10;
}
