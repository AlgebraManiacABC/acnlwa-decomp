/**
 * FUN_00212ed0.c
 * Source line: 272162
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined1 FUN_00212ed0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x1669) != '\0') {
    iVar2 = FUN_001f9684();
    if (iVar2 != 0) {
      uVar3 = FUN_001f9684();
      FUN_001f963c(uVar3,param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}
