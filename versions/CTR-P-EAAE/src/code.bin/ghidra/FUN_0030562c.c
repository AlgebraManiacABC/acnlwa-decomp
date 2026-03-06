/**
 * FUN_0030562c.c
 * Source line: 403331
 * Body lines: 14
 */
#include "../../../include/types.h"

void * FUN_0030562c(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *itemParam;
  void *pvVar2;
  
  itemParam = Item_GetParam(param_1);
  pvVar2 = NULL;
  if (itemParam != NULL) {
    pvVar2 = (void *)Item_GetPrice(itemParam);
    bVar1 = itemParam->_xA;
    if ((bVar1 < 0x9b) && ((bVar1 == 0x33 || bVar1 == 0x34 || (bVar1 == 0x75 || bVar1 == 0x76)))) {
      pvVar2 = GET_DAT_0095bf74();
      return pvVar2;
    }
  }
  return pvVar2;
}
