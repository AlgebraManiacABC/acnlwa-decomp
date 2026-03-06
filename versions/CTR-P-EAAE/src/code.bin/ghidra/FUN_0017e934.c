/**
 * FUN_0017e934.c
 * Source line: 196765
 * Body lines: 11
 */
#include "../../../include/types.h"

Item_t * FUN_0017e934(Item_t *param_1,uint param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  Item_Set(&IStack_10,0x223f);
  if (7 < param_2) {
    Item_CopyAndReturn(param_1,&IStack_10);
    return &IStack_10;
  }
  iVar1 = FUN_002ff6f4(*(undefined4 *)(&UNK_00880494 + param_2 * 4));
  Item_Set(param_1,(uint)*(ushort *)((&DAT_00953718)[param_2] + iVar1 * 2));
  return &IStack_10;
}
