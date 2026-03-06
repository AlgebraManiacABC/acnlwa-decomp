/**
 * FUN_0076a028.c
 * Source line: 1127620
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0076a028(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  if (((param_1->raw_item_id & 0x7fff) != 0x7ffc) &&
     ((pIVar1 = Item_GetParam(param_1), pIVar1 == NULL || (iVar2 = FUN_007486dc(pIVar1), iVar2 == 0)
      ))) {
    return 0;
  }
  return 1;
}
