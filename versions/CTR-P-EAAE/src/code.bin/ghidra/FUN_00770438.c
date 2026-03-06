/**
 * FUN_00770438.c
 * Source line: 1133251
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00770438(int param_1,Item_t *param_2)

{
  ItemID IVar1;
  
  IVar1 = Item_GetID(param_2);
  if (-1 < (int)IVar1) {
    if ((uint)((int)IVar1 >> 5) < 0xba) {
      return *(uint *)(param_1 + ((int)IVar1 >> 5) * 4) >> (IVar1 & 0x1f) & 1;
    }
  }
  return 0;
}
