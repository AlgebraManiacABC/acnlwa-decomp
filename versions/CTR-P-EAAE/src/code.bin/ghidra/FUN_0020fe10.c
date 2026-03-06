/**
 * FUN_0020fe10.c
 * Source line: 270631
 * Body lines: 12
 */
#include "../../../include/types.h"

Item_t * FUN_0020fe10(int param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *pIVar1;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  FUN_00237a1c();
  pIVar1 = (Item_t *)(*(uint *)(param_2 + 4) & 0xff0000);
  if (pIVar1 == (Item_t *)0x10000) {
    pIVar1 = (Item_t *)Item_Set(&IStack_10,0x20b7);
    Item_Copy((Item_t *)(param_1 + 0x130),pIVar1);
    *(undefined1 *)(param_1 + 0x138) = 0;
    pIVar1 = &IStack_10;
  }
  return pIVar1;
}
