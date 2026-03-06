/**
 * FUN_00425928.c
 * Source line: 589441
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00425928(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = FUN_00467df0(param_1 + 8);
  if ((int)uVar1 < 0) {
    FUN_00467df0(param_1 + 4);
    return uVar1;
  }
  uVar1 = FUN_00467df0(param_1 + 4);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}
