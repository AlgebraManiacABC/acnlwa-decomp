/**
 * FUN_0012ad84.c
 * Source line: 131965
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0012ad84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_r1;
  
  while( true ) {
    FUN_0012a518();
    iVar1 = FUN_0013060c(param_1,extraout_r1,param_3,param_4,param_5);
    FUN_0012ab78();
    if ((iVar1 != -0x375f3010 && iVar1 != -0x1f5f33f8) && iVar1 != -0x375f33fe) break;
    nn::svc::SleepThread(10000000);
  }
  return;
}
