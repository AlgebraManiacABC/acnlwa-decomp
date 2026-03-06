/**
 * FUN_00733724.c
 * Source line: 1089089
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00733724(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    if (iRam0097d428 - 0x100000U < 0x3ff00000) {
      uVar1 = (uint)*(ushort *)(iRam0097d428 + 0x5c);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xd8) & 0xffff;
  }
  return uVar1;
}
