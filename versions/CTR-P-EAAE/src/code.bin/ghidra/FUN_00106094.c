/**
 * FUN_00106094.c
 * Source line: 107576
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00106094(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  Item_t aIStack_14 [2];
  
  *(ushort *)(param_2 + *param_3 * 2) =
       *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  *(int *)(param_2 + 0x280) = *(int *)(param_2 + 0x280) + -1;
  iVar1 = FUN_002fe7cc(1);
  if (iVar1 != 0) {
    iVar2 = ranqd2_ranged_int_from_seed_1(5);
    Item_Set(aIStack_14,iVar2 + 0x98 & 0xffff);
    thunk_FUN_006b9d64(aIStack_14);
    FUN_002fc994(iVar1,aIStack_14,param_3[2],param_3[3],0);
    NOP_002f777c();
  }
  return;
}
