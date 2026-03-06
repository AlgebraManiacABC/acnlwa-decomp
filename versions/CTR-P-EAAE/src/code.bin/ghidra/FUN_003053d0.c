/**
 * FUN_003053d0.c
 * Source line: 403166
 * Body lines: 10
 */
#include "../../../include/types.h"

byte FUN_003053d0(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 != NULL) && (iVar2 = FUN_007486dc(pIVar1), iVar2 != 0)) {
    pIVar1 = Item_GetParam(param_1);
    if ((byte)pIVar1->field_0x13 < 0x22) {
      return pIVar1->field_0x13;
    }
  }
  return 0;
}
