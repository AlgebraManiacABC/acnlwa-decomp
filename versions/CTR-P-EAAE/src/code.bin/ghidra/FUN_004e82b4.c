/**
 * FUN_004e82b4.c
 * Source line: 730490
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_004e82b4(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  int iVar3;
  undefined4 uVar4;
  
  pIVar2 = Item_GetParam(param_1);
  if ((pIVar2 != NULL) &&
     (((bVar1 = pIVar2->_xA, bVar1 < 0x9b && (bVar1 == 0x93 || bVar1 == 0x94)) ||
      (iVar3 = Item_GetRawID(param_1), iVar3 - 0x33b5U < 7)))) {
    uVar4 = FUN_002fb94c();
    return uVar4;
  }
  return 0;
}
