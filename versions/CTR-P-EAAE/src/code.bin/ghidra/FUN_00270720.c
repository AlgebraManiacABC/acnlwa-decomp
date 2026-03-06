/**
 * FUN_00270720.c
 * Source line: 318214
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00270720(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar1 = iRam00950368;
  if ((iVar2 != 0) && (iRam00950368 != 0)) {
    if (*(uint *)(iRam00950368 + 0x12c3c) < 7) {
      *(int *)(iRam00950368 + 0x12c20 + *(uint *)(iRam00950368 + 0x12c3c) * 4) = iVar2;
      *(int *)(iVar1 + 0x12c3c) = *(int *)(iVar1 + 0x12c3c) + 1;
    }
  }
  return;
}
