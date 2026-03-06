/**
 * FUN_007680f0.c
 * Source line: 1125759
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_007680f0(Item_t *param_1)

{
  uint uVar1;
  ItemParam_t *pIVar2;
  int iVar3;
  
  if ((param_1->raw_item_id & 0xffff7fff) - 0x2000 < 0x172b) {
    pIVar2 = Item_GetParam(param_1);
    uVar1 = 0;
    if ((pIVar2 != NULL) && (iVar3 = FUN_007486dc(pIVar2), iVar3 != 0)) {
      uVar1 = 1;
    }
    uVar1 ^= 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
