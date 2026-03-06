/**
 * FUN_0030b674.c
 * Source line: 409550
 * Body lines: 13
 */
#include "../../../include/types.h"

byte FUN_0030b674(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *itemParam;
  int iVar2;
  
  itemParam = Item_GetParam(param_1);
  if ((itemParam != NULL) && (iVar2 = FUN_007486dc(itemParam), iVar2 != 0)) {
    itemParam = Item_GetParam(param_1);
    bVar1 = itemParam->field22_0x19 & 0xf;
    if (0xd < bVar1) {
      bVar1 = 0;
    }
    return bVar1;
  }
  return 0xd;
}
