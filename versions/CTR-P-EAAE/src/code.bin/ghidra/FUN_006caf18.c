/**
 * FUN_006caf18.c
 * Source line: 1027952
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006caf18(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_005c98a8(uVar2 & 0xff);
    if (uVar1 == param_1 >> 0x12) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 0xfc);
  return 0;
}
