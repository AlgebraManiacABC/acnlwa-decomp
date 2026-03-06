/**
 * FUN_0010032c.c
 * Source line: 103521
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0010032c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_001209ec();
  uVar2 = FUN_002f6e64(auStack_18,"ScriptHeap");
  uRam00952c84 = FUN_002f6e78(uVar1,uVar2,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  FUN_0012089c(uRam00952c84);
  return uRam00952c84;
}
