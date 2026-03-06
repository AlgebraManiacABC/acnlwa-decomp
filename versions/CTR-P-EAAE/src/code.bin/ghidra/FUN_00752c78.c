/**
 * FUN_00752c78.c
 * Source line: 1109056
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00752c78(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [44];
  undefined1 auStack_28 [24];
  ushort local_10 [4];
  
  if ((((*(char *)(param_1 + 0xa8) == '\0') ||
       (iVar1 = FUN_00152a10(auStack_54,4,param_1,0,0), iVar1 != 0)) ||
      (iVar1 = FUN_00153840(local_10,auStack_28), iVar1 == 0)) || (local_10[0] != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
