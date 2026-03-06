/**
 * FUN_006968ec.c
 * Source line: 999728
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006968ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_34 [2];
  undefined1 auStack_2c [12];
  int local_20;
  int local_1c;
  
  FUN_0056c45c(&local_20);
  local_34[0] = local_20 * 0x1000000 + (char)local_1c * 0x10000 + ((local_1c << 0x10) >> 0x18);
  FUN_00116ea4(auStack_2c,4,1);
  for (iVar2 = 0; iVar2 != 4; iVar2 += 1) {
    uVar1 = FUN_0011b4be(auStack_2c,local_34);
    FUN_00116e4e(auStack_2c,uVar1);
    *(char *)(param_1 + 0xf127 + iVar2) = (char)uVar1 + '\x01';
  }
  return;
}
