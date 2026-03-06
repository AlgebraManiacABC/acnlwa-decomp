/**
 * FUN_0076ad90.c
 * Source line: 1128391
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0076ad90(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if ((((pIVar2 == NULL) || (bVar1 = pIVar2->_xA, 0x9a < bVar1)) || (bVar1 != 6 && bVar1 != 7)) &&
     (((pIVar2 = Item_GetParam(param_1), pIVar2 == NULL || (0x9a < pIVar2->_xA)) ||
      (pIVar2->_xA != 0x47)))) {
    return 0;
  }
  return 1;
}
