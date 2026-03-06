/**
 * FUN_00767084.c
 * Source line: 1125025
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00767084(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc60);
  if ((uVar1 & 0x20) != 0) {
    uVar1 ^= 0x20;
  }
  if ((uVar1 & 0x10) == 0) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else if (uVar1 == 0x10) {
    return 0;
  }
  return 1;
}
