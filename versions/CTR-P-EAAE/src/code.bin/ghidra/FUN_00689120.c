/**
 * FUN_00689120.c
 * Source line: 991124
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00689120(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined1 *)(iVar1 + 0x12) = param_3;
  *(undefined1 *)(iVar1 + 0x13) = param_4;
  FUN_0064d0b8(param_1,0xc0,iVar1,0);
  return;
}
