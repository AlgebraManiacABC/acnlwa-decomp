/**
 * FUN_0074087c.c
 * Source line: 1098988
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0074087c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
