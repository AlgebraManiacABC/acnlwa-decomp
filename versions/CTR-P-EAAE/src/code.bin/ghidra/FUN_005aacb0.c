/**
 * FUN_005aacb0.c
 * Source line: 857433
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_005aacb0(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_00346100(uRam0097e0ac,0x567890ac);
    uVar1 = uVar1 >> 0x1f ^ 1;
    *(char *)(param_1 + 8) = (char)uVar1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
