/**
 * FUN_002b7a88.c
 * Source line: 354688
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002b7a88(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan",(char *)param_2[1],&DAT_002b7b20);
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 1,uRam00af76fc,*param_2);
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan",(char *)param_2[1],"out_s");
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 0xb,uRam00af76fc,*param_2);
  uVar1 = FUN_004b4fc0(param_3,"G_inout_00",1);
  param_1[0x15] = uVar1;
  return;
}
