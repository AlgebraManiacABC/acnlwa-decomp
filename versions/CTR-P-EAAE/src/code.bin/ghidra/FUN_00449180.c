/**
 * FUN_00449180.c
 * Source line: 610738
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00449180(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar1 = 0xe0e14826;
  }
  else {
    if (*(char *)(param_1 + 0x9c) != '\0') {
      FUN_0042632c(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    uVar1 = FUN_00449044(param_1,param_1 + 0x88);
    if ((uVar1 & 0x80000000) == 0) {
      *(undefined1 *)(param_1 + 0x9c) = 3;
    }
  }
  return uVar1;
}
