/**
 * FUN_0030f594.c
 * Source line: 413485
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0030f594(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  undefined4 uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if (((((pIVar1 == NULL) || (0x9a < pIVar1->_xA)) || (pIVar1->_xA != 0x47)) &&
      (((pIVar1 = Item_GetParam(param_1), pIVar1 == NULL || (0x9a < pIVar1->_xA)) ||
       (pIVar1->_xA != 0x48)))) && ((param_1->raw_item_id & 0x7fff) != 0x9d)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
