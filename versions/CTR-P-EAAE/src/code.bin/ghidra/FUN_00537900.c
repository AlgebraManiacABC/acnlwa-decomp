/**
 * FUN_00537900.c
 * Source line: 778824
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00537900(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x8f) {
    uVar1 = 2;
  }
  else if (param_1 == 0x90) {
    uVar1 = 0;
  }
  else if (param_1 == 0x91) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}
