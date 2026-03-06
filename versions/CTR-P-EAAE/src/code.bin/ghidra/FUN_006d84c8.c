/**
 * FUN_006d84c8.c
 * Source line: 1035452
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006d84c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x568) | 8;
  uVar2 = 0;
  do {
    uVar1 = 1 << (uVar2 & 0xff);
    if ((*(ushort *)(param_1 + 0x19b2) & uVar1) != 0) {
      *(ushort *)(param_1 + 0x19b4) = (ushort)uVar1 | *(ushort *)(param_1 + 0x19b4);
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0xb);
  FUN_006d6a8c();
  return;
}
