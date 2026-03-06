/**
 * FUN_00231ad4.c
 * Source line: 286291
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00231ad4(int param_1,int param_2,Item_t *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  Item_Copy((Item_t *)(param_1 + 0x18),param_3);
  *(char *)(param_1 + 0x20) = (char)param_4;
  uVar1 = FUN_00305f44();
  FUN_0018fb98(_DAT_0094f3bc,uVar1,uVar2,param_3,param_4);
  return;
}
