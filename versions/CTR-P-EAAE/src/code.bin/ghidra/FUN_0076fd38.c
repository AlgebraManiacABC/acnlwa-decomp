/**
 * FUN_0076fd38.c
 * Source line: 1132870
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076fd38(undefined4 param_1,undefined4 param_2)

{
  ItemID *pIVar1;
  undefined4 uVar2;
  
  FUN_006ef7a4(0xad2f1c,param_1,param_2);
  if ((bRam00ad2f1c == 0x9b) ||
     (pIVar1 = FUN_005359fc((uint)bRam00ad2f1c), *(int *)(pIVar1[1] * 4 + 0xad2f1c) == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
