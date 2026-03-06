/**
 * FUN_006bb230.c
 * Source line: 1017706
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_006bb230(Item_t *param_1,uint param_2)

{
  ItemParam_t *itemParam;
  
  itemParam = Item_GetParam(param_1);
  if ((((itemParam != NULL) && (itemParam->_xA < 0x9b)) && (itemParam->_xA == 0x29)) &&
     (param_2 < 5)) {
    param_1->_x2 = (short)param_2 - 1U & 0x3fff | param_1->_x2 & 0xc000;
    return 1;
  }
  return 0;
}
