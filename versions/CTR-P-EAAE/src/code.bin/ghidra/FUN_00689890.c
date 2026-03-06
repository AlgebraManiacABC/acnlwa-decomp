/**
 * FUN_00689890.c
 * Source line: 991398
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00689890(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41b8(iVar1 + 0xe,param_2);
  *(char *)(iVar1 + 0x16) = (char)((ushort)*param_3 >> 8);
  *(undefined1 *)(iVar1 + 0x17) = param_4;
  FUN_0064d0b8(param_1,0x2d,iVar1,0);
  return;
}
