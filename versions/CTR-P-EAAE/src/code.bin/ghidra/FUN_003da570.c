/**
 * FUN_003da570.c
 * Source line: 550971
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_003da570(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0x80000000) == 0) {
    uVar1 = 0;
  }
  else if ((param_1 & 0x3fc00) == 0x17400) {
    uVar1 = param_1 & 0x3ff | param_1 & 0xffe00000 | 0x18400;
  }
  else {
    uVar1 = 0xf9618588;
  }
  return uVar1;
}
