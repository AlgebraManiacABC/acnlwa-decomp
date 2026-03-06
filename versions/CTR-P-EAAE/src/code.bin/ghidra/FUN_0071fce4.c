/**
 * FUN_0071fce4.c
 * Source line: 1077220
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0071fce4(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 4) {
    uVar1 = (*(byte *)(param_1 + param_2 + 0x7dd2) & 8) >> 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
