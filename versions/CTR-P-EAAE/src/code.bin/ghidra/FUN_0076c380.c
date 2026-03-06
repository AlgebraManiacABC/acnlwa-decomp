/**
 * FUN_0076c380.c
 * Source line: 1129619
 * Body lines: 13
 */
#include "../../../include/types.h"

ushort FUN_0076c380(Item_t *param_1)

{
  byte bVar1;
  ushort uVar2;
  ItemParam_t *pIVar3;
  
  pIVar3 = Item_GetParam(param_1);
  if (((pIVar3 != NULL) && (bVar1 = pIVar3->_xA, bVar1 < 0x9b)) &&
     ((bVar1 == 0x54 || bVar1 == 0x55 || (bVar1 == 0x58 || bVar1 == 0x59)))) {
    uVar2 = param_1->_x2 & 0x3fff;
    if ((param_1->_x2 & 0x3fff) != 0) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}
