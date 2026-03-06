/**
 * FUN_00769ff8.c
 * Source line: 1127602
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00769ff8(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  undefined4 uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if (((pIVar1 == NULL) || (0x31 < (byte)pIVar1->field_0xf)) || (pIVar1->field_0xf != 0x1e)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
