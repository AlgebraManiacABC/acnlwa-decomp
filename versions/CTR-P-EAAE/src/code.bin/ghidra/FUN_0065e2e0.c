/**
 * FUN_0065e2e0.c
 * Source line: 969655
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0065e2e0(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 int param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(char *)(iVar1 + 0x10) = (char)param_5;
  *(undefined1 *)(iVar1 + 0x11) = param_4;
  *(undefined1 *)(iVar1 + 0x16) = param_6;
  if (param_5 == 0) {
    iVar1 = FUN_0064d0b8(param_1,0x52,iVar1,0);
  }
  else {
    iVar1 = FUN_0064d0b8(param_1,0x53,iVar1,0);
  }
  return iVar1 != 0;
}
