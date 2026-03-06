/**
 * FUN_0076afbc.c
 * Source line: 1128541
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0076afbc(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  int iVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if ((pIVar1 == NULL) || (iVar2 = FUN_007486dc(pIVar1), iVar2 == 0)) {
    return 0;
  }
  pIVar1 = Item_GetParam(param_1);
  if (((pIVar1->field14_0x11 < 0x56) && (pIVar1->field14_0x11 != 0)) &&
     ((5 < pIVar1->field22_0x19 >> 4 || (pIVar1->field22_0x19 >> 4 < 3)))) {
    return 1;
  }
  return 0;
}
