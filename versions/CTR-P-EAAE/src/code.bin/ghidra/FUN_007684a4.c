/**
 * FUN_007684a4.c
 * Source line: 1125966
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_007684a4(Item_t *param_1)

{
  ItemParam_t *itemParam;
  int iVar1;
  
  itemParam = Item_GetParam(param_1);
  if ((itemParam != NULL) && (iVar1 = FUN_007486dc(itemParam), iVar1 != 0)) {
    itemParam = Item_GetParam(param_1);
    if ((itemParam->field4_0x6 < 608) && (itemParam->field4_0x6 != 0)) {
      return 1;
    }
  }
  return 0;
}
