/**
 * FUN_006b9da4.c
 * Source line: 1016667
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006b9da4(Item_t *param_1,uint param_2)

{
  ushort uVar1;
  ItemParam_t *itemParam;
  
  if (param_1 == NULL) {
    return;
  }
  itemParam = Item_GetParam(param_1);
  if (itemParam != NULL) {
    FUN_007486dc(itemParam);
  }
  uVar1 = param_1->_x2;
  param_1->_x2 = uVar1 & ~0xc000;
  if (param_2 < 4) {
    param_1->_x2 = uVar1 & ~0xc000 | (ushort)(param_2 << 0xe);
  }
  return;
}
