/**
 * FUN_00686df0.c
 * Source line: 989942
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00686df0(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  FUN_0064dc88(0x41000000,param_1);
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_00759ab0(auStack_18,param_1 + 0x8ca);
    uVar1 = FUN_007650ac(param_1,auStack_18);
    *(undefined4 *)(param_1 + 0x844) = uVar1;
  }
  return;
}
