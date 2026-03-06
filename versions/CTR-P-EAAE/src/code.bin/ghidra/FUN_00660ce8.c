/**
 * FUN_00660ce8.c
 * Source line: 970718
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00660ce8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  FUN_0064d0b8(param_1,0xd5,iVar1,0);
  return;
}
