/**
 * FUN_0066b244.c
 * Source line: 976045
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0066b244(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  FUN_0064d0b8(param_1,0x5e,iVar1,0);
  return;
}
