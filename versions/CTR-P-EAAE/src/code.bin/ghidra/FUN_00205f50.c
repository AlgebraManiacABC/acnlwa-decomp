/**
 * FUN_00205f50.c
 * Source line: 264684
 * Body lines: 6
 */
#include "../../../include/types.h"

Item_t * FUN_00205f50(int param_1,Item_t *param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  src = Item_CopyAndReturn(&IStack_10,param_2);
  Item_Copy((Item_t *)(param_1 + 0x37c),src);
  return &IStack_10;
}
