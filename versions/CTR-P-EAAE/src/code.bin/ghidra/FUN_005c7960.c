/**
 * FUN_005c7960.c
 * Source line: 876472
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005c7960(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00656c20();
    *(undefined1 *)(iVar2 + 0xe) = param_1;
    FUN_0064d0b8(iVar1,0x76,iVar2,0);
    return;
  }
  return;
}
