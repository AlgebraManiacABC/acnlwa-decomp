/**
 * FUN_00768b4c.c
 * Source line: 1126393
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_00768b4c(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (pIVar2 != NULL) {
    bVar1 = FUN_00748724(pIVar2);
    return bVar1;
  }
  return 0x65;
}
