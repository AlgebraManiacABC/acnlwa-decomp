/**
 * FUN_001b4b80.c
 * Source line: 221236
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001b4b80(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *src;
  Item_t IStack_18;
  
  iVar1 = iRam0094fd40;
  IStack_18 = param_4;
  src = (Item_t *)Item_Set(&IStack_18,0x7ffe);
  Item_Copy((Item_t *)(param_1 + iVar1 * 4),src);
  iRam0094fd40 = 0xffffffff;
  return;
}
