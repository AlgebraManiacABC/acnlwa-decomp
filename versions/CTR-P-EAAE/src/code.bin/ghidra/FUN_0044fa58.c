/**
 * FUN_0044fa58.c
 * Source line: 615764
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0044fa58(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0xe0e14826;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x2c) + 0x15c) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}
