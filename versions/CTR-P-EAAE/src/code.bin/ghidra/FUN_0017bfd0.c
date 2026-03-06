/**
 * FUN_0017bfd0.c
 * Source line: 195054
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0017bfd0(Item_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00768174();
  if ((iVar1 == 0) && (iVar1 = Item_IsID(param_1,0x208a), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
