/**
 * FUN_0020d77c.c
 * Source line: 269301
 * Body lines: 10
 */
#include "../../../include/types.h"

Item_t * FUN_0020d77c(Item_t *param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  pIVar1 = (Item_t *)Item_Set(&IStack_10,0x25da);
  Item_Copy(param_1,pIVar1);
  pIVar1 = (Item_t *)Item_Set(&IStack_10,0x26cc);
  Item_Copy(param_1 + 1,pIVar1);
  pIVar1 = (Item_t *)Item_Set(&IStack_10,0x2767);
  Item_Copy(param_1 + 3,pIVar1);
  return &IStack_10;
}
