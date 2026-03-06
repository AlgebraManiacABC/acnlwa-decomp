/**
 * FUN_001f33a4.c
 * Source line: 255666
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001f33a4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  uVar1 = FUN_00240fdc();
  iVar2 = FUN_00240028(uVar1,0);
  if (iVar2 != 0xfc) {
    FUN_0023ffb8(auStack_18,iVar2);
    local_c = (uint)local_c._2_2_ << 0x10;
    (**(code **)(*param_1 + 0xb8))(param_1,0xb,auStack_18,local_c);
  }
  return;
}
