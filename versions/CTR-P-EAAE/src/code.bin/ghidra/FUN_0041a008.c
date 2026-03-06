/**
 * FUN_0041a008.c
 * Source line: 584050
 * Body lines: 14
 */
#include "../../../include/types.h"

FUN_0041a008(int param_1,undefined1 param_2,undefined4 param_3,uint param_4,undefined8 param_5,
            undefined1 param_6)

{
  undefined4 uVar1;
  
  if (param_4 < 0x5dd) {
    nnnstdMemCpy(*(undefined4 *)(param_1 + 0x5c),param_3,param_4);
    *(undefined1 *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x48) = (int)param_5;
    *(int *)(param_1 + 0x40) = (int)((ulonglong)param_5 >> 0x20);
    *(undefined1 *)(param_1 + 0x44) = param_6;
    uVar1 = 0;
    *(uint *)(param_1 + 0x60) = param_4;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
