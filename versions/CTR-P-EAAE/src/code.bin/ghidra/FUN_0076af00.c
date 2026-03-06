/**
 * FUN_0076af00.c
 * Source line: 1128486
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined1 FUN_0076af00(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  uint uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if (((pIVar1 != NULL) && (pIVar1->_xA < 0x9b)) && (pIVar1->_xA == 0x80)) {
    uVar2 = 0;
    do {
      if ((param_1->raw_item_id & 0x7fff) == *(ItemID_2 *)(&UNK_0088e658 + uVar2 * 2)) {
        return (&UNK_0088e61c)[uVar2];
      }
      uVar2 += 1;
    } while (uVar2 < 5);
  }
  return 0x1d;
}
