/**
 * FUN_005c973c.c
 * Source line: 877907
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005c973c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xfc) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x95b6e8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
