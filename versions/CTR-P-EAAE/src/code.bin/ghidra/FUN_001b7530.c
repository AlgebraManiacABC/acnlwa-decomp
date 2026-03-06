/**
 * FUN_001b7530.c
 * Source line: 222455
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_001b7530(int param_1)

{
  undefined4 uVar1;
  
  if (((cRam00ad56fa == '\0') && (cRam00ad56fb != '\0')) && (*(byte *)(param_1 + 0x18) < 0x10)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
