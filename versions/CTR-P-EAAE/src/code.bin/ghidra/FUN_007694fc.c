/**
 * FUN_007694fc.c
 * Source line: 1126968
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_007694fc(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  if (((param_1->raw_item_id & 0x7fff) != NullItem) &&
     ((((((pIVar2 = Item_GetParam(param_1), pIVar2 != NULL && (pIVar2->_xA < 0x9b)) &&
         (pIVar2->_xA == 0x47)) ||
        (((param_1->raw_item_id & 0x7fff) == MinItemID ||
         (pIVar2 = Item_GetParam(param_1), pIVar2 == NULL)))) ||
       ((0x9a < pIVar2->_xA ||
        ((pIVar2->_xA != 0xc || (pIVar2 = Item_GetParam(param_1), pIVar2 == NULL)))))) ||
      ((bVar1 = pIVar2->field_0xf, 0x31 < bVar1 || (bVar1 != 0x2a && bVar1 != 0x30)))))) {
    return 0;
  }
  return 1;
}
