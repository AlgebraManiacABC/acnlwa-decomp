/**
 * FUN_00659d9c.c
 * Source line: 967406
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00659d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41b8(iVar1 + 0xe,param_3);
  if (param_4 != NULL) {
    *(undefined2 *)(iVar1 + 0x12) = *param_4;
  }
  *(undefined1 *)(iVar1 + 0x14) = param_6;
  *(undefined1 *)(iVar1 + 0x15) = param_5;
  FUN_005d4180(param_1,iVar1 + 0x17);
  *(bool *)(iVar1 + 0x16) = param_4 != NULL;
  FUN_0064d0b8(param_2,0x14,iVar1,0);
  return;
}
