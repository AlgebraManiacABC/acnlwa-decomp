/**
 * FUN_00735890.c
 * Source line: 1090926
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00735890(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01' || *(char *)(param_1 + 0x58) == '\x03') {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
