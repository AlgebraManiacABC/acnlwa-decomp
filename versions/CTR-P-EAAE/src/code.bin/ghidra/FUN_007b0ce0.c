/**
 * FUN_007b0ce0.c
 * Source line: 1153776
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_007b0ce0(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0x800) {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0x801) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(iRam0097d784 + 0xc) = uVar1;
  return;
}
