/**
 * FUN_0058a794.c
 * Source line: 834974
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0058a794(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x10000be;
  }
  else {
    uVar1 = 0x10000bf;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
          // WARNING: Subroutine does not return
  FUN_00584074();
}
