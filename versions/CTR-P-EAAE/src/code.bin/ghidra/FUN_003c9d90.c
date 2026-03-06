/**
 * FUN_003c9d90.c
 * Source line: 537246
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003c9d90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_b8 [176];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_0039b3d8(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_b8,FUN_0038203c,0xb0,1);
  FUN_0039b3d8(param_1,auStack_b8);
  FUN_002f76ac(auStack_b8,&UNK_00382114,0xb0,1);
  return;
}
