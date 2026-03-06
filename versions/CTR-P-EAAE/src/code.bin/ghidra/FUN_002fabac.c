/**
 * FUN_002fabac.c
 * Source line: 393529
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002fabac(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = Item_IsValidID((Item_t *)(param_1 + 0x100));
  if (uVar1 != 0) {
    uVar2 = FUN_00768800(param_1 + 0x100);
    *param_2 = uVar2;
  }
  return;
}
