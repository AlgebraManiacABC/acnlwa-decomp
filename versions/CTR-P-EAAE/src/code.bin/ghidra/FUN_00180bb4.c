/**
 * FUN_00180bb4.c
 * Source line: 197965
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00180bb4(Item_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Item_IsID(param_1,0x9e);
  if ((iVar1 != 0) || (iVar1 = Item_IsID(param_1,0x9d), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
