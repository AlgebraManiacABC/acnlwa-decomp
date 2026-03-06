/**
 * FUN_005c6628.c
 * Source line: 875465
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005c6628(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00656c20();
    *(undefined1 *)(iVar2 + 0xe) = param_1;
    FUN_0064d0b8(iVar1,0xa4,iVar2,0);
    return;
  }
  return;
}
