/**
 * FUN_0010c33c.c
 * Source line: 110026
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0010c33c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"StrcHeap");
  DAT_00952c5c = FUN_002f6e78(param_2,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return DAT_00952c5c;
}
