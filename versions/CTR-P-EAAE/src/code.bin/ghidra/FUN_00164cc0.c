/**
 * FUN_00164cc0.c
 * Source line: 180168
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00164cc0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (((uint)uRam00953f94 & 1 << (uVar1 & 0xff)) != 0) {
      FUN_0071dcdc(_DAT_00aaf14c + 0x7008,uVar1);
      GET_DAT_0095bf74();
      return;
    }
    uVar1 += 1;
  } while (uVar1 < 10);
  return;
}
