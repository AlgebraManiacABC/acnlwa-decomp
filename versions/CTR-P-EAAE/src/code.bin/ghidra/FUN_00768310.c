/**
 * FUN_00768310.c
 * Source line: 1125909
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00768310(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->_xA, bVar1 < 0x9b)) &&
     ((bVar1 == 0x65 || bVar1 == 0x66 ||
      ((bVar1 == 0x67 || bVar1 == 0x68 || (bVar1 == 0x69 || bVar1 == 0x6a)))))) {
    return 1;
  }
  return 0;
}
