/**
 * FUN_00426420.c
 * Source line: 590038
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00426420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004264f4(param_1,param_3,param_3,param_4,param_4);
  if (iRam00ae70a4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puRam00ae70ac;
  }
  uVar1 = FUN_0053cde4(param_2,(int)((ulonglong)uVar2 >> 0x20),uVar1,1,0);
  *(undefined4 *)((int)uVar2 * 4 + 0xae59f0) = uVar1;
  return;
}
