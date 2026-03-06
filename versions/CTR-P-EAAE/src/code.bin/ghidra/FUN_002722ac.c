/**
 * FUN_002722ac.c
 * Source line: 319404
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002722ac(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar1 = iRam00950368;
  if ((iVar2 != 0) && (iRam00950368 != 0)) {
    if (*(uint *)(iRam00950368 + 0x12cbc) < 7) {
      *(int *)(iRam00950368 + 0x12ca0 + *(uint *)(iRam00950368 + 0x12cbc) * 4) = iVar2;
      *(int *)(iVar1 + 0x12cbc) = *(int *)(iVar1 + 0x12cbc) + 1;
    }
  }
  return;
}
