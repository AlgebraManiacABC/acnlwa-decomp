/**
 * FUN_00592150.c
 * Source line: 841140
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00592150(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x128) < 1) {
    uVar1 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_00590c14(0,param_1,1);
    uVar1 = 0;
  }
  return uVar1;
}
