/**
 * FUN_00682330.c
 * Source line: 987652
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00682330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = 3;
  FUN_005d41fc(iVar1 + 0xf,param_2);
  *(char *)(iVar1 + 0x13) = (char)((uint)param_3 >> 8);
  *(undefined1 *)(iVar1 + 0x14) = param_4;
  *(undefined1 *)(iVar1 + 0x15) = param_5;
  FUN_0064d0b8(param_1,0x3a,iVar1,0);
  return;
}
