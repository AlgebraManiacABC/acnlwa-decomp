/**
 * FUN_00303534.c
 * Source line: 400608
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00303534(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = ranqd2_ranged_int_from_seed_2(0x10000);
  *(short *)(param_1 + 1) = (short)iVar1;
  uVar2 = ranqd2_ranged_int_from_seed_2(0x1a);
  *(char *)((int)param_1 + 6) = (char)uVar2;
  uVar3 = _ll_shift_l(*(ushort *)(param_1 + 1) + 0x8f187432 + param_2,0,(uVar2 & 0xff) + 4);
  iVar1 = (int)uVar3 + (int)((ulonglong)uVar3 >> 0x20);
  *param_1 = iVar1;
  *(char *)((int)param_1 + 7) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 8) + -0x46;
  return;
}
