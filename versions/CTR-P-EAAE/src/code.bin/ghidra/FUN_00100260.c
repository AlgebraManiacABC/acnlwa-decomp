/**
 * FUN_00100260.c
 * Source line: 103477
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00100260(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_00120894();
  uVar2 = FUN_002f6e64(auStack_18,"PhotoHeap");
  uRam00952c8c = FUN_002f6e78(uVar1,uVar2,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return uRam00952c8c;
}
