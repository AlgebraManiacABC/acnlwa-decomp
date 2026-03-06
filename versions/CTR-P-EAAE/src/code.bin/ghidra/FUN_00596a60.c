/**
 * FUN_00596a60.c
 * Source line: 844096
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00596a60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0059ec48();
  if (iVar2 != -1) {
    FUN_0059ecbc(param_1,iVar2,0);
    iVar1 = iVar2 * 0x12;
    *(char *)(iVar1 + 0x9b418c) = (char)iVar2;
    *(undefined1 *)(iVar1 + 0x9b418a) = 0;
    *(undefined1 *)(iVar1 + 0x9b418b) = 0;
  }
  return iVar2;
}
