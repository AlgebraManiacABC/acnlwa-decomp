/**
 * FUN_006dc0c4.c
 * Source line: 1037244
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_006dc0c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68b0) == 1) {
    uVar1 = **(undefined4 **)(param_1 + 0x68b8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
