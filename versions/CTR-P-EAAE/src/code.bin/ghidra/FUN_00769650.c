/**
 * FUN_00769650.c
 * Source line: 1127060
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00769650(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  uint uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  uVar2 = 0;
  if (pIVar1 != NULL) {
    uVar2 = ((uint)(byte)pIVar1->field25_0x1c << 0x1b) >> 0x1f;
  }
  return uVar2;
}
