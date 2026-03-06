/**
 * FUN_001e4c7c.c
 * Source line: 247923
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001e4c7c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00613c8c(param_1 + 0x18,param_2,0xffffffff);
  uVar1 = FUN_00303660(param_1 + 0x18);
  if (*(uint *)(&UNK_0088f758 + (uint)*(byte *)(param_1 + 0x14) * 4) <= uVar1) {
    FUN_00303534(param_1 + 0x18);
    return;
  }
  return;
}
