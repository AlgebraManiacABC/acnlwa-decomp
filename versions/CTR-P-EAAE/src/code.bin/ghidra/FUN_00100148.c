/**
 * FUN_00100148.c
 * Source line: 103417
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00100148(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"SaveHeap");
  uRam00952c90 = FUN_002f6e78(0x8000,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return uRam00952c90;
}
