/**
 * FUN_007b0b88.c
 * Source line: 1153671
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007b0b88(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(iRam0097d784 + 0xc) == '\0') {
    uVar1 = 0x800;
  }
  else {
    uVar1 = 0x801;
  }
  *param_1 = uVar1;
  return;
}
