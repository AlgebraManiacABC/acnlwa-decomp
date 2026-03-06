/**
 * FUN_0068eb58.c
 * Source line: 994203
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0068eb58(void)

{
  undefined4 uVar1;
  
  if (DAT_00950874 == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_00950874 + 0x78);
  }
  return uVar1;
}
