/**
 * FUN_0012f384.c
 * Source line: 135964
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0012f384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((iRam0097d87c != 0) && (cRam0097d875 == '\0')) {
    while (iVar1 = FUN_00135858(0x97d884), iVar1 == 0) {
      nn::svc::SleepThread(1000000);
    }
    uVar2 = FUN_00135b30(iRam0097d87c,param_1,param_2,param_3,param_4,0x97d875);
    FUN_0013580c(0x97d884);
    return uVar2;
  }
  return 0xc8a0a7fc;
}
