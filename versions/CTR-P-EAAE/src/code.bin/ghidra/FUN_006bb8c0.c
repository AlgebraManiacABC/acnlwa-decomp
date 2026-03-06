/**
 * FUN_006bb8c0.c
 * Source line: 1018087
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006bb8c0(Item_t *param_1,ushort param_2)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->_xA, bVar1 < 0x9b)) &&
     ((bVar1 == 0x54 || bVar1 == 0x55 || (bVar1 == 0x58 || bVar1 == 0x59)))) {
    param_1->_x2 = param_1->_x2 & 0xc000 | param_2;
    return 1;
  }
  return 0;
}
