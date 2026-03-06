/**
 * FUN_0011559c.c
 * Source line: 115131
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0011559c(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  Item_t aIStack_14 [2];
  
  *(ushort *)(param_2 + *param_3 * 2) =
       *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  *(int *)(param_2 + 0x280) = *(int *)(param_2 + 0x280) + -1;
  Item_Set(aIStack_14,(uint)*(ushort *)(param_1 + 0x5850));
  uVar1 = FUN_002fc948();
  FUN_002ff800(aIStack_14);
  FUN_002fc994(uVar1,aIStack_14,param_3[2],param_3[3],0);
  NOP_002f777c();
  return;
}
