/**
 * FUN_0070c1f0.c
 * Source line: 1063868
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0070c1f0(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  ItemID item_id;
  undefined4 uVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  Item_Set(&IStack_10,0x23c6);
  pIVar1 = (Item_t *)switchD_0051fed4::caseD_9(param_1 + 2);
  item_id = Item_GetRawID(pIVar1);
  uVar2 = Item_IsID(&IStack_10,item_id);
  return uVar2;
}
