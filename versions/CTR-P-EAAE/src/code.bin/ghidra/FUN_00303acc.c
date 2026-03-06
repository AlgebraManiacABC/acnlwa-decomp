/**
 * FUN_00303acc.c
 * Source line: 400806
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00303acc(Item_t *param_1)

{
  int iVar1;
  ItemParam_t *itemParam;
  undefined4 uVar2;
  
  itemParam = Item_GetParam(param_1);
  if ((itemParam != NULL) && (iVar1 = FUN_007486dc(itemParam), iVar1 != 0)) {
    itemParam = Item_GetParam(param_1);
    uVar2 = FUN_00748534(itemParam);
    return uVar2;
  }
  return 0;
}
