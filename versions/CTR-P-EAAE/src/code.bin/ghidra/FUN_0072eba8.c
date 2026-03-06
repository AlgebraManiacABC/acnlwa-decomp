/**
 * FUN_0072eba8.c
 * Source line: 1085950
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0072eba8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    if (param_2 < 4) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x70) + param_2 * 0xf8 + 8);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
