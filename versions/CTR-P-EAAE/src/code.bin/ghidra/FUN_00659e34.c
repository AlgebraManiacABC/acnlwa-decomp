/**
 * FUN_00659e34.c
 * Source line: 967427
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00659e34(undefined4 param_1,undefined2 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined2 *)(iVar1 + 0xe) = *param_2;
  *(undefined1 *)(iVar1 + 0x10) = param_4;
  *(undefined1 *)(iVar1 + 0x11) = param_3;
  *(undefined1 *)(iVar1 + 0x12) = param_5;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  FUN_0064d0b8(param_1,0x15,iVar1,0);
  return;
}
