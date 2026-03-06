/**
 * FUN_007478a0.c
 * Source line: 1103594
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007478a0(byte *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*param_1;
  if (((((int)(uVar1 << 0x1d) < 0) && ((int)(uVar1 << 0x1c) < 0)) && ((int)(uVar1 << 0x1b) < 0)) &&
     (((int)(uVar1 << 0x1a) < 0 && ((int)(uVar1 << 0x19) < 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
