/**
 * FUN_003a0fa4.c
 * Source line: 513330
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003a0fa4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_c0 [184];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_0039e7b4(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_c0,FUN_00386644,0xb8,1);
  FUN_0039e7b4(param_1,auStack_c0);
  FUN_002f76ac(auStack_c0,&UNK_00386754,0xb8,1);
  return;
}
