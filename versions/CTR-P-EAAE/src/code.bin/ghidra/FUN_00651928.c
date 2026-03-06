/**
 * FUN_00651928.c
 * Source line: 962600
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00651928(undefined4 param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  FUN_005d4180((float)param_3,iVar1 + 0xf);
  FUN_0064d0b8(param_1,0x20,iVar1,0);
  return;
}
