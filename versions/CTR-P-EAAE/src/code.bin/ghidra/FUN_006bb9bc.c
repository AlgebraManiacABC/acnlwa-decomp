/**
 * FUN_006bb9bc.c
 * Source line: 1018135
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_006bb9bc(Item_t *param_1,uint param_2)

{
  ItemParam_t *pIVar1;
  
  pIVar1 = Item_GetParam(param_1);
  if ((((pIVar1 != NULL) && (pIVar1->_xA < 0x9b)) && (pIVar1->_xA == 0x8d)) && (param_2 < 9)) {
    param_1->_x2 = param_1->_x2 & 0xc000 | (ushort)param_2 & 0x3fff;
    return 1;
  }
  return 0;
}
