/**
 * FUN_00448598.c
 * Source line: 610070
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00448598(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar1 = 0xe0a14827;
  }
  else {
    if (*(char *)(param_1 + 0x9c) != '\0') {
      FUN_0042632c(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    uVar1 = FUN_0044966c(param_1,param_1 + 0x88);
    if ((uVar1 & 0x80000000) == 0) {
      *(undefined1 *)(param_1 + 0x9c) = 5;
    }
  }
  return uVar1;
}
