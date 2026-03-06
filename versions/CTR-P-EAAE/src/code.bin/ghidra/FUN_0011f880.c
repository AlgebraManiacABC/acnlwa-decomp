/**
 * FUN_0011f880.c
 * Source line: 122483
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0011f880(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00123ca8(-0x7fff,param_1,param_2);
  if ((uVar1 & 0x80000000) == 0) {
    iRam00974f7c = param_1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00129040(1);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
