/**
 * FUN_00286ffc.c
 * Source line: 330196
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00286ffc(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_90 [112];
  
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_inout_00",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x3e0,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3e0);
  uVar1 = FUN_004b4fc0(param_1 + 0x458,"G_inout_00",1);
  FUN_00568630(param_1 + 0x458,param_1 + 0x5a4,uVar1,0);
  FUN_005697e0(0,param_1 + 0x5a4);
  __rt_memcpy_w(auStack_90,&UNK_008482ac,100);
  FUN_002fb94c();
  return;
}
