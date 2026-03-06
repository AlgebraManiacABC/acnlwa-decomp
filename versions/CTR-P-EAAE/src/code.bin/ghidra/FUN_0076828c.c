/**
 * FUN_0076828c.c
 * Source line: 1125870
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_0076828c(Item_t *param_1)

{
  ushort uVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_1);
  uVar1 = 0;
  if ((pIVar2 != NULL) && (uVar1 = *(ushort *)pIVar2, 0x1fa < uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}
