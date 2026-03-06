/**
 * FUN_004156d0.c
 * Source line: 581121
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_004156d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = 0xe0a14827;
  }
  else {
    if (*(char *)(param_1 + 0x74) != '\0') {
      FUN_0042632c(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
    uVar1 = FUN_00414bd8(param_1,param_1 + 0x60,param_2);
    if ((uVar1 & 0x80000000) == 0) {
      *(undefined1 *)(param_1 + 0x74) = 4;
    }
  }
  return uVar1;
}
