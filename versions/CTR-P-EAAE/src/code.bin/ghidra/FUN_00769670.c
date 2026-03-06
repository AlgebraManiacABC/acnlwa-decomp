/**
 * FUN_00769670.c
 * Source line: 1127076
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00769670(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 != NULL) && (bVar1 = pIVar2->field_0xf, bVar1 < 0x32)) &&
     ((bVar1 == 0x1b || bVar1 == 0x1c || (bVar1 == 0x1d || bVar1 == 0x1f)))) {
    return 1;
  }
  return 0;
}
