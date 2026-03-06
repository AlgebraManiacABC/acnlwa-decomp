/**
 * FUN_0010c37c.c
 * Source line: 110042
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0010c37c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"VrBoxHeap");
  _DAT_00952c44 = FUN_002f6e78(0x8c00,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return _DAT_00952c44;
}
