/**
 * FUN_005c7354.c
 * Source line: 876169
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005c7354(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00656c20();
    *(undefined1 *)(iVar2 + 0xe) = param_1;
    *(undefined1 *)(iVar2 + 0xf) = param_2;
    FUN_0064d0b8(iVar1,0x77,iVar2,0);
    return;
  }
  return;
}
