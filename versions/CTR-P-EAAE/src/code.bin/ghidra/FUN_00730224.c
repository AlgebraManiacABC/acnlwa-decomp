/**
 * FUN_00730224.c
 * Source line: 1086902
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 FUN_00730224(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 6);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
