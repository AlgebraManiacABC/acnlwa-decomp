/**
 * FUN_00573aac.c
 * Source line: 818388
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00573aac(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7a4) == '\0') {
    if (*(char *)(param_1 + 0x7a5) != '\0') {
      *(byte *)(param_1 + 0x7a3) = ~*(byte *)(param_1 + 0x7a3) & 1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
