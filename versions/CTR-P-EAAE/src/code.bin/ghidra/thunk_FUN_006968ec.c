/**
 * thunk_FUN_006968ec.c
 * Source line: 411559
 * Body lines: 15
 */
#include "../../../include/types.h"

void thunk_FUN_006968ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_34 [2];
  undefined1 auStack_2c [12];
  int iStack_20;
  int iStack_1c;
  
  FUN_0056c45c(&iStack_20);
  aiStack_34[0] = iStack_20 * 0x1000000 + (char)iStack_1c * 0x10000 + ((iStack_1c << 0x10) >> 0x18);
  FUN_00116ea4(auStack_2c,4,1);
  for (iVar2 = 0; iVar2 != 4; iVar2 += 1) {
    uVar1 = FUN_0011b4be(auStack_2c,aiStack_34);
    FUN_00116e4e(auStack_2c,uVar1);
    *(char *)(param_1 + 0xf127 + iVar2) = (char)uVar1 + '\x01';
  }
  return;
}
