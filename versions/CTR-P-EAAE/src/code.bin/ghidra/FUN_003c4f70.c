/**
 * FUN_003c4f70.c
 * Source line: 534142
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003c4f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  iVar1 = FUN_0039442c(param_2,0);
  if (iVar1 != 0) {
    FUN_0036f60c(param_1,iVar1);
    return;
  }
  FUN_00301d0c(auStack_18,FUN_003d3a40,0xc,1);
  FUN_0036f60c(param_1,auStack_18);
  return;
}
