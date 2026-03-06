/**
 * FUN_00303c98.c
 * Source line: 400870
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00303c98(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 != NULL) && (iVar2 = FUN_007486dc(pIVar1), iVar2 != 0)) {
    pIVar1 = Item_GetParam(param_1);
    return ((uint)(byte)pIVar1->field25_0x1c << 0x1d) >> 0x1f;
  }
  return 1;
}
