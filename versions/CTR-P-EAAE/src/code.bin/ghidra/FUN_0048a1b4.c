/**
 * FUN_0048a1b4.c
 * Source line: 660403
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0048a1b4(void)

{
  undefined4 uVar1;
  uint local_c8 [49];
  
  FUN_00350884(local_c8);
  if (((local_c8[0] & 1) == 0) || ((local_c8[0] & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
