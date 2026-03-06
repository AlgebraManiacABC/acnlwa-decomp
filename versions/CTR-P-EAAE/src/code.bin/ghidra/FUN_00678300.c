/**
 * FUN_00678300.c
 * Source line: 982769
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00678300(int param_1,int param_2,undefined2 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0x13) = param_4;
  FUN_005d41b8(iVar1 + 0xe,param_1 + 0x14);
  *(char *)(iVar1 + 0x12) = (char)((ushort)*(undefined2 *)(param_1 + 0x2e) >> 8);
  if (param_2 != 0) {
    FUN_005d41b8(iVar1 + 0xe,param_2);
  }
  if (param_3 != NULL) {
    *(char *)(iVar1 + 0x12) = (char)((ushort)*param_3 >> 8);
  }
  FUN_0064d0b8(param_1,0xe2,iVar1,0);
  return;
}
