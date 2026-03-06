/**
 * FUN_0076c5b0.c
 * Source line: 1129797
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076c5b0(Item_t *param_1)

{
  byte bVar1;
  ItemParam_t *pIVar2;
  undefined4 uVar3;
  
  pIVar2 = Item_GetParam(param_1);
  if (((pIVar2 == NULL) || (bVar1 = pIVar2->field20_0x17 & 0xf, 4 < bVar1)) || (bVar1 != 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
