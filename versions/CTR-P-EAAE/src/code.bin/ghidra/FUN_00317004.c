/**
 * FUN_00317004.c
 * Source line: 418182
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00317004(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = *(code **)(param_2 * 8 + 0x94f394);
  uVar2 = *(uint *)(param_2 * 8 + 0x94f398);
  if ((pcVar1 != NULL) || (((uVar2 & 1) != 0 && (uVar2 != 0)))) {
    if ((uVar2 & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(((int)uVar2 >> 1) + param_1));
    }
    (*pcVar1)();
  }
  *(char *)(param_1 + 0x98) = (char)param_2;
  return;
}
