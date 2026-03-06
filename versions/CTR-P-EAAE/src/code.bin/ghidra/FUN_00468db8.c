/**
 * FUN_00468db8.c
 * Source line: 634607
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00468db8(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  FUN_0077956c(auStack_10);
  uVar1 = FUN_003e1de4(auStack_10);
  if ((uVar1 & 0x80000000) == 0) {
    FUN_007795ec(param_1,auStack_10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xe10113ea;
  }
  return uVar2;
}
