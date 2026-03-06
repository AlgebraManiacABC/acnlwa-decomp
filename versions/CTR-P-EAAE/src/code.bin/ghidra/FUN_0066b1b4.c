/**
 * FUN_0066b1b4.c
 * Source line: 976017
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0066b1b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41b8(iVar1 + 0xe,param_2);
  *(char *)(iVar1 + 0x12) = (char)((uint)param_3 >> 8);
  FUN_0064d0b8(param_1,0x1d,iVar1,0);
  return;
}
