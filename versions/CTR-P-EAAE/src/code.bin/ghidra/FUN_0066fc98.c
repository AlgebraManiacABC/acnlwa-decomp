/**
 * FUN_0066fc98.c
 * Source line: 978261
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0066fc98(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(char *)(iVar1 + 0x12) = (char)((ushort)*param_3 >> 8);
  FUN_005d41b8(iVar1 + 0xe,param_2);
  FUN_0064d0b8(param_1,0xe9,iVar1,0);
  return;
}
