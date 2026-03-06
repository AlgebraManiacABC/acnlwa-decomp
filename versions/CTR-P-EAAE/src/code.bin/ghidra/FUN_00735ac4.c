/**
 * FUN_00735ac4.c
 * Source line: 1091031
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00735ac4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x14) == '\0') ||
     (*(char *)(param_1 + 0x2c) != '\x04' && *(char *)(param_1 + 0x2c) != '\x05')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
