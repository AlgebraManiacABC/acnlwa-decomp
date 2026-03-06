/**
 * FUN_0068ec10.c
 * Source line: 994356
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0068ec10(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_00950874 != 0) {
    if (*(char *)(DAT_00950874 + 0x135) == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
