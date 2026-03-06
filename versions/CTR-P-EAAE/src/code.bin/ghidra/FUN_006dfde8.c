/**
 * FUN_006dfde8.c
 * Source line: 1039667
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_006dfde8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68a0) == 1) {
    uVar1 = **(undefined4 **)(param_1 + 0x68a8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
