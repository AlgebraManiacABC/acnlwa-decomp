/**
 * FUN_00115f30.c
 * Source line: 115485
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00115f30(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  Item_t IStack_c;
  
  *(ushort *)(param_2 + *param_3 * 2) =
       *(ushort *)(param_2 + *param_3 * 2) & ~*(ushort *)(param_3 + 4);
  *(int *)(param_2 + 0x280) = *(int *)(param_2 + 0x280) + -1;
  iVar1 = ranqd2_ranged_int_from_seed_1(100);
  Item_Set(&IStack_c,(uint)*(ushort *)(&UNK_00865780 + (uint)(iVar1 == 0) * 2));
  uVar2 = FUN_002fc948();
  FUN_002fc994(uVar2,&IStack_c,param_3[2],param_3[3],0);
  NOP_002f777c();
  return;
}
