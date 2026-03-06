/**
 * FUN_0052ab60.c
 * Source line: 770321
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0052ab60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  Item_t *src;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_00303cdc();
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  iVar1 = ranqd2_ranged_int_from_seed_2(5);
  src = (Item_t *)FUN_006bbd54(&uStack_10,0x33,iVar1);
  Item_Copy((Item_t *)(param_1 + 8),src);
  FUN_0011493c(&uStack_10);
  return;
}
