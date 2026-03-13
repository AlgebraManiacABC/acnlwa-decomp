/**
 * FUN_00246df4.c
 * Source line: 297230
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00246df4(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x104) < 0x3c) && (param_2 != 0)) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0x14) == 0) {
        *(int *)(param_1 + uVar1 * 4 + 0x14) = param_2;
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
        return uVar1;
      }
      uVar1 += 1;
    } while (uVar1 < 0x3c);
  }
  return 0x3d;
}
