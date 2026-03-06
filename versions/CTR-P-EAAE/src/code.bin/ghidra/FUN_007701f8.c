/**
 * FUN_007701f8.c
 * Source line: 1133104
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_007701f8(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  ItemID IVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  IVar1 = FUN_006b9b30(param_2,param_3);
  Item_Set(&IStack_10,IVar1);
  IVar1 = Item_GetID(&IStack_10);
  if (-1 < (int)IVar1) {
    if ((uint)((int)IVar1 >> 5) < 0xba) {
      return *(uint *)(param_1 + ((int)IVar1 >> 5) * 4) >> (IVar1 & 0x1f) & 1;
    }
  }
  return 0;
}
