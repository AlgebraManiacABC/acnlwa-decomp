/**
 * FUN_001c987c.c
 * Source line: 231962
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001c987c(int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_2 * 0x10 + 0x94f3c4);
  pcVar2 = *(code **)(param_2 * 0x10 + 0x94f3c0);
  if ((pcVar2 != NULL) || (((uVar1 & 1) != 0 && (uVar1 != 0)))) {
    if ((uVar1 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)uVar1 >> 1)));
    }
    (*pcVar2)();
  }
  *(char *)(param_1 + 0x30) = (char)param_2;
  return;
}
