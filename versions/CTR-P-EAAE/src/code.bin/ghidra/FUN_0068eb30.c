/**
 * FUN_0068eb30.c
 * Source line: 994184
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0068eb30(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_00950874 != 0) {
    if (*(char *)(DAT_00950874 + 0xf2) == '\x05') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
