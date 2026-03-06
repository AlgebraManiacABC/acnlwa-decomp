/**
 * FUN_0070c1ac.c
 * Source line: 1063850
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0070c1ac(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  ItemID item_id;
  undefined4 uVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  Item_Set(&IStack_10,0x2460);
  pIVar1 = (Item_t *)FUN_007203f0(param_1 + 2);
  item_id = Item_GetRawID(pIVar1);
  uVar2 = Item_IsID(&IStack_10,item_id);
  return uVar2;
}
