/**
 * FUN_0024a5f4.c
 * Source line: 298834
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0024a5f4(int param_1,Item_t *param_2)

{
  uint uVar1;
  ItemID IVar2;
  
  IVar2 = Item_GetID(param_2);
  if (-1 < (int)IVar2) {
    uVar1 = (int)IVar2 >> 5;
    if (uVar1 < 0xba) {
      *(uint *)(param_1 + uVar1 * 4) = *(uint *)(param_1 + uVar1 * 4) | 1 << (IVar2 & 0x1f);
      return 1;
    }
  }
  return 0;
}
