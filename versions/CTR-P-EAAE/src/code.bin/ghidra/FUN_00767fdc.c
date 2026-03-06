/**
 * FUN_00767fdc.c
 * Source line: 1125669
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00767fdc(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  uint uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  uVar2 = 0;
  if (pIVar1 != NULL) {
    uVar2 = (uint)(byte)pIVar1->field_0x1a << 0x1c;
    if (uVar2 >> 0x1e < 3) {
      uVar2 >>= 0x1e;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
