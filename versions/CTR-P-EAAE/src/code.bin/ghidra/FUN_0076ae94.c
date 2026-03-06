/**
 * FUN_0076ae94.c
 * Source line: 1128469
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0076ae94(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if ((((pIVar2 != NULL) && (pIVar2->_xA < 0x9b)) && (pIVar2->_xA == 0x48)) &&
     (((pIVar2 = Item_GetParam(param_1), pIVar2 != NULL && (bVar1 = pIVar2->field_0xf, bVar1 < 0x32)
       ) && ((bVar1 == 0x1b || bVar1 == 0x1c || (bVar1 == 0x1d || bVar1 == 0x1f)))))) {
    return 1;
  }
  return 0;
}
