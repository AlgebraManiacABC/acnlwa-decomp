/**
 * FUN_0076c5e4.c
 * Source line: 1129816
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0076c5e4(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->field_0xf, bVar1 < 0x32)) &&
     ((bVar1 == 7 || bVar1 == 0xd || (bVar1 == 0x11 || bVar1 == 0x14)))) {
    return 1;
  }
  return 0;
}
