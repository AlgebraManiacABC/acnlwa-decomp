/**
 * FUN_0045c654.c
 * Source line: 625258
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0045c654(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    *(int *)(param_1 + 0x24) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}
