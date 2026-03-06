/**
 * FUN_0051b66c.c
 * Source line: 760842
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0051b66c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_003da694();
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(uint *)(param_1 + 0xac) = uVar1;
  return;
}
