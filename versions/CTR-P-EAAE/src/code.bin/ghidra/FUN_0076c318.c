/**
 * FUN_0076c318.c
 * Source line: 1129596
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0076c318(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  ItemParam_t *pIVar2;
  int iVar3;
  undefined4 uVar4;
  
  pIVar1 = Item_GetParam(param_1);
  if ((((pIVar1 == NULL) || (pIVar2 = Item_GetParam(param_1), pIVar2 == NULL)) ||
      (iVar3 = FUN_007485d0(pIVar2), iVar3 != 0)) ||
     (((iVar3 = FUN_007684a4(param_1), iVar3 != 0 && ((param_1->_x2 & 0x3fff) != 0)) ||
      (-1 < (int)((uint)(byte)pIVar1->field25_0x1c * 0x8000000))))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
