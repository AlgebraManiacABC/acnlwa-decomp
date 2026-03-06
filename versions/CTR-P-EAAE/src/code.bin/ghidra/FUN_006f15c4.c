/**
 * FUN_006f15c4.c
 * Source line: 1049409
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006f15c4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ItemID *pIVar1;
  Item_t aIStack_44 [4];
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  pIVar1 = FUN_005359fc(param_2);
  Item_Set(aIStack_44,*pIVar1 & 0xffff);
  Item_GetParam(aIStack_44);
  FUN_002fae84();
  return;
}
