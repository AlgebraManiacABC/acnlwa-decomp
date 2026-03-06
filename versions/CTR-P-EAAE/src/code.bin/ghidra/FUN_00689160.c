/**
 * FUN_00689160.c
 * Source line: 991139
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00689160(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  FUN_0064d0b8(param_1,0x37,iVar1,0);
  return;
}
