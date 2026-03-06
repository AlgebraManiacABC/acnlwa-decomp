/**
 * FUN_001d4a94.c
 * Source line: 238393
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001d4a94(int param_1)

{
  short sVar1;
  code *pcVar2;
  
  FUN_001d4558(param_1,1);
  sVar1 = *(short *)(param_1 + 0x62) + -1;
  *(short *)(param_1 + 0x62) = sVar1;
  if (sVar1 == 0) {
    FUN_00243fc8(param_1 + 0x10,5);
    pcVar2 = pcRam009572f8;
    if ((DAT_009572fc & 1) != 0) {
      pcVar2 = *(code **)(pcRam009572f8 + *(int *)(param_1 + ((int)DAT_009572fc >> 1)));
    }
    (*pcVar2)();
    *(undefined2 *)(param_1 + 0x60) = 4;
  }
  return;
}
