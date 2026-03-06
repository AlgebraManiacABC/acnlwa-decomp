/**
 * FUN_002fdf60.c
 * Source line: 396231
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002fdf60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_001cb4ec();
  *(undefined1 *)(param_1 + 0x10) = 0x86;
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan",(char *)param_2[1],"fade_in");
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 0x1b0,uRam00af76fc,*param_2);
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan",(char *)param_2[1],"fade_out");
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 0x1d8,uRam00af76fc,*param_2);
  uVar1 = FUN_004b4fc0(param_1 + 4,"G_fade_00",1);
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  uVar1 = FUN_00568a80(param_1 + 4,"T_msg_00");
  FUN_005e2c98(param_1 + 0x3c8,uVar1,0);
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  return;
}
