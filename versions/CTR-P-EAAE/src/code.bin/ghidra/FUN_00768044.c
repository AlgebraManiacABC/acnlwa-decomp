/**
 * FUN_00768044.c
 * Source line: 1125710
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00768044(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->_xA, bVar1 < 0x9b)) &&
     ((bVar1 == 0x3d || bVar1 == 0x70 ||
      (((bVar1 == 0x4d || bVar1 == 0x4f || (bVar1 == 0x51 || bVar1 == 0x79)) ||
       (bVar1 == 0x35 || bVar1 == 0x3a)))))) {
    return 1;
  }
  return 0;
}
