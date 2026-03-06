/**
 * FUN_005c0fa0.c
 * Source line: 870433
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005c0fa0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_005c33d0(param_1,0);
  uVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x1a9);
    if ((cVar1 == '\x0f' || cVar1 == '\x12') || (cVar1 == '\x10' || cVar1 == '\x11')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
