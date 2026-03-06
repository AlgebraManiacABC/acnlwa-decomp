/**
 * FUN_00718e20.c
 * Source line: 1071851
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00718e20(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if ((*(uint *)(*(int *)(param_1 + 0xc) + ((int)uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0) {
        if (param_2 == 0) {
          return uVar1;
        }
        param_2 += -1;
      }
      uVar1 += 1;
    } while ((int)uVar1 < *(int *)(param_1 + 4));
  }
  return 0xffffffff;
}
