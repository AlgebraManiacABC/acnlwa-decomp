/**
 * FUN_0010c4b8.c
 * Source line: 110075
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0010c4b8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  if (param_2 == 0) {
    param_2 = 0x140000;
  }
  uVar1 = FUN_002f6e64(auStack_18,"SoundExtStageHeap");
  uRam00952c98 = FUN_002f6e78(param_2,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return uRam00952c98;
}
