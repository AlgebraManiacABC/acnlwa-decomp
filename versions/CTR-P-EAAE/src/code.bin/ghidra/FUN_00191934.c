/**
 * FUN_00191934.c
 * Source line: 205391
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00191934(int param_1)

{
  undefined4 uVar1;
  
  DAT_0094fd58 = DAT_0094fd58 & 0xffffffef | 8;
  uVar1 = FUN_004b4fc0(param_1 + 0x4e8,"G_inout",1);
  FUN_00568630(param_1 + 0x4e8,param_1 + 0x634,uVar1,0);
  FUN_005697e0(0,param_1 + 0x634);
  *(uint *)(param_1 + 0x786c) = *(uint *)(param_1 + 0x786c) | 8;
  FUN_00299984(param_1 + 0x78ac,1);
  return;
}
