/**
 * FUN_006f2c1c.c
 * Source line: 1049985
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006f2c1c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ItemID *item_id;
  Item_t item [5];
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  item_id = FUN_005359fc(param_2);
  Item_Set(item,*item_id & 0xffff);
  Item_GetParam(item);
  FUN_002fae84();
  return;
}
