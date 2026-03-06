/**
 * FUN_0076ac04.c
 * Source line: 1128286
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0076ac04(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->_xA, bVar1 < 0x9b)) &&
     ((bVar1 == 0x54 || bVar1 == 0x55 || ((bVar1 == 6 || bVar1 == 7) || bVar1 == 0x2f)))) {
    return 1;
  }
  return 0;
}
