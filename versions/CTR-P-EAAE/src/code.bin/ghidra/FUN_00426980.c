/**
 * FUN_00426980.c
 * Source line: 590487
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00426980(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (((param_2 - 0x100000 < 0x3ff00000) && ((param_2 & 3) == 0)) && (0x16c3 < param_3)) {
    if (*(int *)(param_1 + 4) - 0x100000U < 0x3ff00000) {
      uVar1 = 0xe0a14821;
    }
    else {
      *(uint *)(param_1 + 4) = param_2;
      *(uint *)(param_1 + 8) = param_3;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xe0e14826;
}
