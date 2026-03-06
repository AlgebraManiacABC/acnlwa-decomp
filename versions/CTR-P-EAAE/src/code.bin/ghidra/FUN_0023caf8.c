/**
 * FUN_0023caf8.c
 * Source line: 292678
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0023caf8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar1 = iRam00950368;
  if ((iVar2 != 0) && (iRam00950368 != 0)) {
    if (*(uint *)(iRam00950368 + 0x12c1c) < 7) {
      *(int *)(iRam00950368 + 0x12c00 + *(uint *)(iRam00950368 + 0x12c1c) * 4) = iVar2;
      *(int *)(iVar1 + 0x12c1c) = *(int *)(iVar1 + 0x12c1c) + 1;
    }
  }
  return;
}
