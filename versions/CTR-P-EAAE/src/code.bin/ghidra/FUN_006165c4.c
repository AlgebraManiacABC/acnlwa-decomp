/**
 * FUN_006165c4.c
 * Source line: 928657
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_006165c4(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00952880;
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(param_1 * 4 + 0x952880);
  }
  return uVar1;
}
