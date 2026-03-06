/**
 * FUN_0038ba24.c
 * Source line: 495121
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_0038ba24(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  FUN_003cf948(auStack_30);
  iVar1 = FUN_003856f8(param_1 + 0x234,auStack_30);
  if (iVar1 == 0) {
    FUN_003cfa88(auStack_30);
    return false;
  }
  iVar1 = FUN_0036a6e8(param_1 + 4,auStack_30,param_3);
  FUN_003cfa88(auStack_30);
  return iVar1 == 0;
}
