/**
 * FUN_00448df0.c
 * Source line: 610522
 * Body lines: 12
 */
#include "../../../include/types.h"

ushort FUN_00448df0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 1;
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x6c) & uVar2) == 0) {
      return uVar1 & 0xff;
    }
    uVar1 += 1;
    uVar2 <<= 1;
  } while (uVar1 < 0xc);
  return 0xfd;
}
