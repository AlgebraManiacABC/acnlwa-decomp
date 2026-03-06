/**
 * FUN_00678434.c
 * Source line: 982830
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00678434(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x16) = param_6;
  *(undefined4 *)(iVar1 + 0x10) = *param_5;
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  FUN_005d41b8(iVar1 + 0x17,param_4);
  FUN_0064d0b8(param_1,0x50,iVar1,0);
  return;
}
