/**
 * FUN_0027abf0.c
 * Source line: 324144
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0027abf0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0076ab28(param_1 + 8);
  if (iVar1 == 3) {
    puVar2 = (undefined *)(param_1 + 8);
  }
  else {
    puVar2 = &DAT_0095bfdc;
  }
  iVar1 = FUN_003117bc(puVar2);
  if (iVar1 != 7) {
    return;
  }
  Item_Copy((Item_t *)(param_1 + 0x10),(Item_t *)&DAT_0095bfdc);
  return;
}
