/**
 * FUN_003a9920.c
 * Source line: 517927
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003a9920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_40 [56];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_003b5454(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_40,&UNK_00392ad8,0x38,1);
  FUN_003b5454(param_1,auStack_40);
  FUN_002f76ac(auStack_40,&UNK_00392b64,0x38,1);
  return;
}
