/**
 * FUN_00243fc8.c
 * Source line: 295701
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00243fc8(int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_2 * 0x10 + 0x957248);
  pcVar2 = *(code **)(param_2 * 0x10 + 0x957244);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)uVar1 >> 1)));
  }
  (*pcVar2)();
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}
