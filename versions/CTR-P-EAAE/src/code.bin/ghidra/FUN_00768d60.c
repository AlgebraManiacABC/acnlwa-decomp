/**
 * FUN_00768d60.c
 * Source line: 1126577
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00768d60(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 != NULL) && (iVar2 = FUN_007486dc(pIVar1), iVar2 != 0)) {
    iVar2 = FUN_00535a1c(param_1);
    return ((uint)*(byte *)(iVar2 + 4) << 0x1d) >> 0x1f;
  }
  return 1;
}
