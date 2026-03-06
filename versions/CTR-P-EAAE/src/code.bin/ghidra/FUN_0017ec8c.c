/**
 * FUN_0017ec8c.c
 * Source line: 196922
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0017ec8c(Item_t *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((((param_2 == 0) && (iVar1 = FUN_00768174(), iVar1 == 0)) &&
      (uVar2 = Item_IsValidID(param_1), uVar2 != 0)) &&
     (iVar1 = FUN_002fcb34(param_1), iVar1 == 0x52 || iVar1 == 0x53)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
