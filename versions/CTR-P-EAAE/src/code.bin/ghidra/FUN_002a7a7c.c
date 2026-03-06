/**
 * FUN_002a7a7c.c
 * Source line: 346871
 * Body lines: 8
 */
#include "../../../include/types.h"

Item_t * FUN_002a7a7c(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  pIVar1 = (Item_t *)Item_Set(&IStack_10,0x282b);
  Item_Copy(param_1,pIVar1);
  pIVar1 = (Item_t *)Item_Set(&IStack_10,0x2925);
  Item_Copy(param_1 + 3,pIVar1);
  return &IStack_10;
}
