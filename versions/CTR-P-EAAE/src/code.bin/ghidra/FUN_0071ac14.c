/**
 * FUN_0071ac14.c
 * Source line: 1073346
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0071ac14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [20];
  
  uVar1 = FUN_006a5e34();
  FUN_0080c37c(auStack_30,param_1 + 4,param_1 + 0x14,uVar1);
  FUN_0074824c(auStack_20,param_1 + 4);
  iVar2 = FUN_007481ec(auStack_30,auStack_20);
  if ((iVar2 != 0) && (iVar2 = FUN_005286b8(param_1 + 0x20,auStack_28), iVar2 == 0)) {
    return 1;
  }
  return 0;
}
