/**
 * FUN_0024a7a0.c
 * Source line: 298951
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0024a7a0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_005c3db8(param_2);
  if ((iVar2 == 0) || (uVar3 = FUN_007165d0(), uVar3 < 2)) {
    uVar1 = 0x65;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}
