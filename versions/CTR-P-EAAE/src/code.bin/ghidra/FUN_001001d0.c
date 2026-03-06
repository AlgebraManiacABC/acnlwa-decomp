/**
 * FUN_001001d0.c
 * Source line: 103447
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_001001d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"FaderHeap");
  uRam00952c7c = FUN_002f6e78(0x400,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return uRam00952c7c;
}
