/**
 * FUN_00687fe0.c
 * Source line: 990650
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00687fe0(int param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5,undefined2 *param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined2 *)(iVar1 + 0xe) = param_2;
  *(undefined2 *)(iVar1 + 0x10) = param_3;
  if (param_6 == NULL) {
    param_6 = (undefined2 *)(param_1 + 0x2e);
  }
  *(undefined1 *)(iVar1 + 0x14) = param_4;
  *(undefined1 *)(iVar1 + 0x13) = param_5;
  *(char *)(iVar1 + 0x12) = (char)((ushort)*param_6 >> 8);
  *(undefined1 *)(iVar1 + 0x15) = param_7;
  FUN_0064d0b8(param_1,0xc5,iVar1,0);
  return;
}
