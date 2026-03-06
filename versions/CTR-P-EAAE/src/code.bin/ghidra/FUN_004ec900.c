/**
 * FUN_004ec900.c
 * Source line: 733990
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004ec900(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
    }
  }
  else {
    uVar1 = FUN_004f1028();
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),uVar1);
  return uVar2 >> 0x1f ^ 1;
}
