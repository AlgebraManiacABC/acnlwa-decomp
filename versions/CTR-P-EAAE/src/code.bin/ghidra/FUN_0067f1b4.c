/**
 * FUN_0067f1b4.c
 * Source line: 986181
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0067f1b4(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined4 *)(iVar1 + 0xf) = param_3;
  FUN_005d41b8(iVar1 + 0x13,param_4);
  *(char *)(iVar1 + 0x17) = (char)((uint)param_5 >> 8);
  FUN_0064d0b8(param_1,0x9c,iVar1,0);
  return;
}
