/**
 * FUN_00112e08.c
 * Source line: 113565
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00112e08(int param_1,Item_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Item_IsNullItem(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_0030bb10(param_2), uVar2 = 0, iVar1 != 0)) {
    Item_Copy((Item_t *)(param_1 + 0x8e6),param_2);
    uVar2 = 1;
  }
  return uVar2;
}
