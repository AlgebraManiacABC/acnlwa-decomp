/**
 * FUN_00314228.c
 * Source line: 416232
 * Body lines: 6
 */
#include "../../../include/types.h"

Item_t * FUN_00314228(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = (Item_t *)Item_Set(&IStack_10,0x27a4);
  Item_Copy((Item_t *)(param_1 + 0x12),src);
  return &IStack_10;
}
