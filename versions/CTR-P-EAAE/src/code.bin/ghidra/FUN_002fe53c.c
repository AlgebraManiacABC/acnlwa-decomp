/**
 * FUN_002fe53c.c
 * Source line: 396501
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_002fe53c(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  undefined4 uVar2;
  
  pIVar1 = Item_GetParam(param_1);
  if (((pIVar1 == NULL) || (0x9a < pIVar1->_xA)) || (pIVar1->_xA != 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
