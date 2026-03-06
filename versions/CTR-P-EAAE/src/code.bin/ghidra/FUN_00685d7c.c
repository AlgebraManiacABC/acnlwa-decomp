/**
 * FUN_00685d7c.c
 * Source line: 989453
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00685d7c(undefined4 param_1,undefined2 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(char *)(iVar1 + 0xe) = (char)((ushort)*param_2 >> 8);
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(undefined1 *)(iVar1 + 0x10) = param_4;
  FUN_0064d0b8(param_1,0xb8,iVar1,0);
  return;
}
