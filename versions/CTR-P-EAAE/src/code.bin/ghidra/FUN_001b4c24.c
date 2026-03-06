/**
 * FUN_001b4c24.c
 * Source line: 221273
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001b4c24(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  uint uVar1;
  Item_t IStack_28;
  
  uVar1 = 0;
  IStack_28 = param_4;
  do {
    src = (Item_t *)Item_Set(&IStack_28,0x7ffe);
    Item_Copy((Item_t *)(param_1 + uVar1 * 4),src);
    uVar1 += 1;
  } while (uVar1 < 10);
  uRam0094fd40 = 0xffffffff;
  GET_DAT_0095bf74();
  return;
}
