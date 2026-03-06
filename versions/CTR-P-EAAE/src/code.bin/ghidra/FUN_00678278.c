/**
 * FUN_00678278.c
 * Source line: 982746
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00678278(float param_1,int param_2,undefined2 param_3,undefined1 param_4,
                 undefined2 *param_5,undefined1 param_6,undefined2 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined2 *)(iVar1 + 0xe) = param_3;
  *(undefined2 *)(iVar1 + 0x15) = param_7;
  *(undefined4 *)(iVar1 + 0x10) = param_8;
  if (param_5 == NULL) {
    param_5 = (undefined2 *)(param_2 + 0x2e);
  }
  *(char *)(iVar1 + 0x14) = (0.0 < param_1) * (char)(int)param_1;
  *(undefined1 *)(iVar1 + 0x17) = param_4;
  *(char *)(iVar1 + 0x18) = (char)((ushort)*param_5 >> 8);
  *(undefined1 *)(iVar1 + 0x19) = param_6;
  FUN_0064d0b8(param_2,0xc4,iVar1,0);
  return;
}
