/**
 * FUN_007017a8.c
 * Source line: 1058062
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_007017a8(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam0095321c;
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x95321c);
  }
  return uVar1;
}
