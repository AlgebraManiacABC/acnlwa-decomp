/**
 * FUN_006548c4.c
 * Source line: 964415
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006548c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41fc(iVar1 + 0xe,param_2);
  *(char *)(iVar1 + 0x12) = (char)((uint)param_3 >> 8);
  *(undefined1 *)(iVar1 + 0x13) = param_4;
  *(undefined1 *)(iVar1 + 0x14) = param_5;
  *(undefined1 *)(iVar1 + 0x15) = param_6;
  FUN_0064d0b8(param_1,0x87,iVar1,0);
  return;
}
