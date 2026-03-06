/**
 * FUN_00282be4.c
 * Source line: 328375
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00282be4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  iVar1 = FUN_00305f2c();
  if (iVar1 == 2) {
    uVar2 = FUN_00305f44();
    bRam0094ddfc &= ~(byte)(1 << (uVar2 & 0xff));
    local_8 = 0x4ff05;
    FUN_007d0e24(4,&local_8);
  }
  return;
}
