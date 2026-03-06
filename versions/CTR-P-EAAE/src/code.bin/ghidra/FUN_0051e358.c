/**
 * FUN_0051e358.c
 * Source line: 763044
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0051e358(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  uVar1 = FUN_00305f44();
  *(uint *)(param_1 + 0x20) = (uVar1 & 7) << 0x11 | *(uint *)(param_1 + 0x20) & 0xfff1ffff;
  iVar2 = FUN_002fc900();
  if (iVar2 != 0) {
    local_10 = CONCAT31(local_10._1_3_,param_2);
    FUN_007d14fc(4,&local_10);
  }
  return;
}
