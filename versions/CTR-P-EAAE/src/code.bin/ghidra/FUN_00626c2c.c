/**
 * FUN_00626c2c.c
 * Source line: 940593
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00626c2c(void)

{
  uint uVar1;
  
  FUN_00308238();
  FUN_0029ce10(DAT_00953864);
  FUN_00582464();
  FUN_00300634(1);
  uVar1 = 0;
  do {
    FUN_004e7d38(uVar1 & 0xff,0);
    uVar1 += 1;
  } while (uVar1 < 4);
  FUN_0030444c(0xa82000);
  FUN_002f98a8(DAT_0095386c);
  DAT_00aaef14 = DAT_00aaef14 & 0xfb;
  return;
}
