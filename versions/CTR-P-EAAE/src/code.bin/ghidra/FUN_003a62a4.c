/**
 * FUN_003a62a4.c
 * Source line: 515871
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003a62a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_28 [32];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_003bb840(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_28,FUN_00397ef4,0x1c,1);
  FUN_003bb840(param_1,auStack_28);
  FUN_002f76ac(auStack_28,&UNK_00397fd0,0x1c,1);
  return;
}
