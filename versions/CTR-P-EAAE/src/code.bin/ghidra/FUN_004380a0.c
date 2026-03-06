/**
 * FUN_004380a0.c
 * Source line: 601770
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_004380a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    if (param_2 != 0) {
      *(int *)(param_1 + 0x70) = param_2;
      FUN_004261dc(param_2);
    }
    uVar1 = 1;
  }
  return uVar1;
}
