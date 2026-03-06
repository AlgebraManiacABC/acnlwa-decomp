/**
 * FUN_005e32a0.c
 * Source line: 893378
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005e32a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [28];
  
  FUN_005f723c(auStack_30);
  iVar1 = FUN_005d46dc();
  uVar2 = 4;
  if (iVar1 == 8) {
    uVar2 = 1;
  }
  FUN_005f6eb0(auStack_30,param_1,param_2,param_3,10,uVar2);
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x3e) = 5;
  return;
}
