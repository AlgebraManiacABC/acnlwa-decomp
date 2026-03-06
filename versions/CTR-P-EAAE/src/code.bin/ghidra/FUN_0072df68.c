/**
 * FUN_0072df68.c
 * Source line: 1085234
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0072df68(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = 0xd820ebf8;
  }
  else if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0xe0e0ebf6;
  }
  else if (param_4 < 0x11) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e0ebec;
  }
  return uVar1;
}
