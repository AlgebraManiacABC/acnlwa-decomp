/**
 * FUN_00338794.c
 * Source line: 437185
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00338794(int param_1)

{
  undefined4 uVar1;
  
  DAT_0094fd58 = DAT_0094fd58 & 0xffffffef | 8;
  FUN_00338d48(param_1);
  FUN_00338830(param_1);
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_inout",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x3e0,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3e0);
  *(uint *)(param_1 + 4000) = *(uint *)(param_1 + 4000) | 8;
  *(uint *)(param_1 + 0xc1c) = *(uint *)(param_1 + 0xc1c) | 8;
  *(uint *)(param_1 + 0x1324) = *(uint *)(param_1 + 0x1324) | 8;
  return;
}
