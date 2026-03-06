/**
 * FUN_001fddb8.c
 * Source line: 260126
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001fddb8(undefined4 param_1)

{
  int iVar1;
  
  (**(code **)(iRam00993064 + 8))(0x993064);
  iVar1 = 0;
  do {
    if (*(short *)(iRam00993068 + iVar1 * 2) == 0) {
      if (iVar1 < 0x80001) goto LAB_001fde10;
      break;
    }
    iVar1 += 1;
  } while (iVar1 < 0x80001);
  iVar1 = 0;
LAB_001fde10:
  (**(code **)(iRam00993064 + 8))(0x993064);
  FUN_005fdf68(param_1,iRam00993068,iVar1 + 1);
  return;
}
