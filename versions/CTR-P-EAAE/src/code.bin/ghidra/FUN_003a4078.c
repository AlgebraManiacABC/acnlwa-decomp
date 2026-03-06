/**
 * FUN_003a4078.c
 * Source line: 514719
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003a4078(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_003b5208(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_28,&UNK_00392970,0x20,1);
  FUN_003b5208(param_1,auStack_28);
  FUN_002f76ac(auStack_28,&UNK_0039298c,0x20,1);
  return;
}
