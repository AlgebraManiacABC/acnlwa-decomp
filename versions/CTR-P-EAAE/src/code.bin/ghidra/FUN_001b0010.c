/**
 * FUN_001b0010.c
 * Source line: 218089
 * Body lines: 15
 */
#include "../../../include/types.h"

Item_t * FUN_001b0010(Item_t *param_1,int param_2,int param_3,Item_t param_4)

{
  undefined4 uVar1;
  Item_t IVar2;
  Item_t IStack_18;
  
  IVar2.raw_item_id = 0;
  IVar2._x2 = 0;
  IStack_18 = param_4;
  if (param_4 != (Item_t)0x0) {
    do {
      uVar1 = Item_Set(&IStack_18,(uint)*(ushort *)(param_3 + (int)IVar2 * 2));
      FUN_0056de54(param_2 + (int)IVar2 * 0x5c,uVar1,0);
      IVar2 = (Item_t)((int)IVar2 + 1);
      param_1 = &IStack_18;
    } while ((uint)IVar2 < (uint)param_4);
  }
  return param_1;
}
