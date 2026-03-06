/**
 * FUN_0066ac20.c
 * Source line: 975831
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0066ac20(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  FUN_005d41fc(iVar1 + 0xf,param_2);
  *(char *)(iVar1 + 0x13) = (char)((uint)param_3 >> 8);
  *(undefined1 *)(iVar1 + 0xe) = param_4;
  *(undefined1 *)(iVar1 + 0x14) = param_5;
  *(undefined1 *)(iVar1 + 0x16) = param_6;
  *(byte *)(iVar1 + 0x15) = *(byte *)(param_1 + 0x172) >> 7;
  FUN_0064d0b8(param_1,0x7e,iVar1,0);
  return;
}
