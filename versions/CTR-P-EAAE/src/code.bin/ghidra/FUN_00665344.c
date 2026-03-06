/**
 * FUN_00665344.c
 * Source line: 972980
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00665344(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(undefined1 *)(iVar1 + 0x10) = param_4;
  FUN_0064d0b8(param_1,0x5f,iVar1,0);
  return;
}
