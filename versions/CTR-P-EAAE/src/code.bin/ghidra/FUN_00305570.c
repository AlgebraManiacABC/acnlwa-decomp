/**
 * FUN_00305570.c
 * Source line: 403271
 * Body lines: 12
 */
#include "../../../include/types.h"

byte FUN_00305570(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  int iVar3;
  
  pIVar2 = Item_GetParam(param_1);
  if ((pIVar2 != NULL) && (iVar3 = FUN_007486dc(pIVar2), iVar3 != 0)) {
    pIVar2 = Item_GetParam(param_1);
    bVar1 = pIVar2->field20_0x17 & 0xf;
    if (bVar1 < 5) {
      return bVar1;
    }
  }
  return 0;
}
