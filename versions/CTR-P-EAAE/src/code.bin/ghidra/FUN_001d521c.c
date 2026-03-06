/**
 * FUN_001d521c.c
 * Source line: 238661
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001d521c(int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_2 * 0x10 + 0x9572ac);
  pcVar2 = *(code **)(&DAT_009572a8 + param_2 * 0x10);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)uVar1 >> 1)));
  }
  (*pcVar2)();
  *(int *)(param_1 + 0x5c) = param_2;
  return;
}
