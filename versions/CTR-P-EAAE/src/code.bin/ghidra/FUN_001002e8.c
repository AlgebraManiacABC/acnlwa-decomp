/**
 * FUN_001002e8.c
 * Source line: 103507
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_001002e8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"StageHeap");
  DAT_00952c3c = FUN_002f6e78(0xeb8000,uVar1,param_1,1,1);
  FUN_002f6e8c(auStack_18);
  return DAT_00952c3c;
}
