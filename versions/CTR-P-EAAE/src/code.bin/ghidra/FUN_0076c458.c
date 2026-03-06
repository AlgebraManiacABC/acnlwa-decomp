/**
 * FUN_0076c458.c
 * Source line: 1129684
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0076c458(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  undefined4 uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  uVar2 = 0;
  if (pIVar1 != NULL) {
    if ((int)((uint)(byte)pIVar1->field_0x1b * 0x40000000) < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
