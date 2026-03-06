/**
 * FUN_003aaae0.c
 * Source line: 518502
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003aaae0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_003c1130(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_20,&UNK_003b1d30,0x18,1);
  FUN_003c1130(param_1,auStack_20);
  FUN_002f76ac(auStack_20,&UNK_003b1d54,0x18,1);
  return;
}
