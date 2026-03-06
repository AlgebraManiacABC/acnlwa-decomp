/**
 * FUN_00303094.c
 * Source line: 400273
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00303094(int param_1,Item_t *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = Item_GetRawID(param_2);
  if (uVar2 < 0x372b) {
    uVar1 = uVar2 - 0x2000 >> 5;
    *(uint *)(param_1 + uVar1 * 4) = *(uint *)(param_1 + uVar1 * 4) | 1 << (uVar2 - 0x2000 & 0x1f);
  }
  return;
}
